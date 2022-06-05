//Classe pendulo

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <random>
#include <ctime>

using std::cout;
using std::endl;
using std::setw;

//criando classe pensulo
class pendulo {
	
	//especificando os parâmetros da classe
private:
	double g, l, A, dt, sigma, pi;
	int N;
	
	//Criar um construtor da classe pendulo
public:
	pendulo(double g, double l, double A, double dt, double sigma, int N) {
		this->g = g;
		this->A = A;
		this->dt = dt;
		this->l = l;
		this->N = N;
		this->sigma = sigma;
		this->pi = acos(-1);
	}
	//criando as funções membro
	//1) função para gerar números aleatorios entre 0 e 1(exclui 0)
	//note que rand() gera um número inteiro aleatorio entre 0 e RAND_MAX
	
	double getRand() {
		
		while(true){
			double num = ((double)rand()/(RAND_MAX));
			if (num>0) {
				return num;
			}
		}
	}
	
	//função para gerar array de ruído gaussiano no tempo t
	//pelo metodo box muller
	
	double* wienner() {
		double* W= new double[N];
		
		for(int i=0; i<N; i++) {
			double r1 = getRand();
			double r2 = getRand();
			double a = -2.0*log(r1);
			double b = cos(2.0*pi*r2);
			W[i] = sigma*sqrt(a)*b*sqrt(dt);
		}
		return W;
		delete[] W;
	}
	
	//função para gerar os arrays da cinemática sem ruido
	// arrays são theta[] e dtheta[]
	
	double* tseries(char op) {
		double* theta = new double[N];
		double* dtheta= new double[N];
		double omega = g/l;
		double t = 0.;
		
		for(int i=0; i<N; i++) {
			theta[i] = A*sin(omega*t)*exp(-t); //posição angular
			dtheta[i] = omega*A*cos(omega*t)*exp(-t);
						-A*sin(omega*t)*exp(-t); //velocidade angular
			t+= dt;
		}
		
		//instrução switch para retorno de 2 arrays
		
		switch(op) {
			case 'A': {
				return theta;
				break;
				
			}
			case 'B': {
				return dtheta;
				break;
			}
			default:
				cout<<"Escolha incorreta"<<endl;
		}
		
		delete[] theta;
		delete[] dtheta;
		return 0;
	}
	
	//função para gerar os arrays de cinemática com ruído
	
	double* ts_ruido(char op) {
		double* w = wienner(); //ruido gaussiano
		double* theta = new double[N];
		double* dtheta= new double[N];
		double omega = g/l;
		double t = 0.;
		
		for(int i=0; i<N; i++) {
			theta[i] = A*sin(omega*t)*exp(-t) + w[i];   //posição angular
			dtheta[i] = omega*A*cos(omega*t)*exp(-t);
						-A*sin(omega*t)*exp(-t); //velocidade angular
			t+= dt;
		}
		
		//instrução switch para retorno de 2 arrays
		
		switch(op) {
			case 'A': {
				return theta;
				break;
				
			}
			case 'B': {
				return dtheta;
				break;
			}
			default:
				cout<<"Escolha incorreta"<<endl;
		}
		
		delete[] theta;
		delete[] dtheta;
		return 0;
	}
	
	//função para obter o grafico do ruido gaussiano
	
	void print_wienner() {
		std::ofstream output("wiener.dat");
		double* w= wienner();
		double t = 0.;
		
		for (int i=0; i<N; i++) {
			output<<t<<setw(16)<<w[i]<<endl;
			t += dt;
		}
	}
	
	//função para imprimir a cinematica sem ruído
	
	void print_ts() {
		std::ofstream output("theta_vs_t.dat");
		char a = 'A';
		double* theta= tseries(a);
		double t= 0.;
		
		for(int i=0;i<N; i++) {
			output<<t<<setw(16)<<theta[i]<<endl;
			t += dt;
		}
		
	}
	
	//imprimir a cinematica com ruido
		void print_tsr() {
		std::ofstream output("theta_vs_t_r.dat");
		char a = 'A';
		double* theta= ts_ruido(a);
		double t= 0.;
		
		for(int i=0;i<N; i++) {
			output<<t<<setw(16)<<theta[i]<<endl;
			t += dt;
		}
		
	}
	
	//função para imprimir diagrama de fase sem ruido
	
	void print_dphase() {
		std::ofstream output("theta_vs_dtheta.dat");
		char a = 'A';
		char b = 'B';
		double* theta = tseries(a);
		double* dtheta = tseries(b);
		
		for (int i=0; i<N; i++) {
			output<<theta[i]<<setw(16)<<dtheta[i]<<endl;
		}
	}
	
	//função para imprimir diagrama de fase com ruido
	
	void print_dphase_r() {
		std::ofstream output("theta_vs_dtheta_r.dat");
		char a = 'A';
		char b = 'B';
		double* theta = ts_ruido(a);
		double* dtheta = ts_ruido(b);
		
		for (int i=0; i<N; i++) {
			output<<theta[i]<<setw(16)<<dtheta[i]<<endl;
		}
	}
};


int main() {
	
	//definindo parametros de classe
	double g,l, A, dt, sigma;
	g = 9.81;
	l = 1.0;
	A = 1.0;
	sigma = 0.5; //intensidade do ruido
	double T = 200.0; //tempo total em segundos
	dt = 0.002;
	int N = floor(T/dt); //floor é arredondamento
	
	//definindo a seed para a função numero aleatorios
	srand(time(NULL)); //null significa o tempo atual - para gerar um valor
						//um valor diferente a cada vez que o programa é inicializado
	
	//criando um objeto da classe pendulo
	
	pendulo dyn(g, l, A, dt, sigma, N); //objeto da classe pendulo
	
	//teste daa função imprimir diagrama de fase com ruido
	
	dyn.print_dphase_r();
	
	
	
	
	
	return 0;
}
