//P�rograma utiliza os seguintes recursos:
// 1-> usa uma fun��o para retornar um array de dados de p�ndulos simples
//2 -> Uma fun��o recebe o array mencionado como argumento e,
//3 -> manipula o array como por exemplo calculando a posi��o angular m�dia
//do p�ndulo ap�s T segundos

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

double* dyn(double A, double g, double l, int size, double dt) {
	
	double* theta = new double[size];  //aloca��o din�mica de mem�ria
	double omega;
	omega = g/l;
	double t = 0.0;
	
	for(int i=0; i<size; i++) {
		theta[i]= A*sin(omega*t);
		t+= dt;
		
	}
	
	return theta; //a fun��o retorna o array theta[size]
	delete[] theta; //liberando mem�ria din�mica 
	
	
}

double fun_avg(double arr[], int size) {
	
	double sum = 0.;
	double avg; //media
	
	for(int i=0; i<size; i++) {
		
		sum += arr[i];
		avg = sum/ double(size); //cast
	}
	
	return avg; //retorna a posi��o angular m�dia do p�ndulo ap�s T segundos
}


int main() {
	
	//Definindo os par�metros:
	double A = 0.57;
	double g = 9.81;
	double l = 1.0;
	
	double T= 1000000.0;
	double dt= 0.2;
	int N= T/dt;
	
	//invoca��o da fun��o que retorna a s�rie temporal do pendulo
	double* tseries= dyn(A,g,l,N,dt); //retorna o array com a s�rie temporal
	
	//calculo da m�dia da posi��o angular do pendulo
	double theta_medio= fun_avg(tseries,N);
	
	//impress�o na tela da posi��o m�dia
	
	cout<<"theta medio apos "<<T<<" segundos:"<<setw(8)<<theta_medio<<" rad"<<endl;
	
	return 0;
}
