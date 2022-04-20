//P´rograma utiliza os seguintes recursos:
// 1-> usa uma função para retornar um array de dados de pêndulos simples
//2 -> Uma função recebe o array mencionado como argumento e,
//3 -> manipula o array como por exemplo calculando a posição angular média
//do pêndulo após T segundos

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

double* dyn(double A, double g, double l, int size, double dt) {
	
	double* theta = new double[size];  //alocação dinâmica de memória
	double omega;
	omega = g/l;
	double t = 0.0;
	
	for(int i=0; i<size; i++) {
		theta[i]= A*sin(omega*t);
		t+= dt;
		
	}
	
	return theta; //a função retorna o array theta[size]
	delete[] theta; //liberando memória dinâmica 
	
	
}

double fun_avg(double arr[], int size) {
	
	double sum = 0.;
	double avg; //media
	
	for(int i=0; i<size; i++) {
		
		sum += arr[i];
		avg = sum/ double(size); //cast
	}
	
	return avg; //retorna a posição angular média do pêndulo após T segundos
}


int main() {
	
	//Definindo os parâmetros:
	double A = 0.57;
	double g = 9.81;
	double l = 1.0;
	
	double T= 1000000.0;
	double dt= 0.2;
	int N= T/dt;
	
	//invocação da função que retorna a série temporal do pendulo
	double* tseries= dyn(A,g,l,N,dt); //retorna o array com a série temporal
	
	//calculo da média da posição angular do pendulo
	double theta_medio= fun_avg(tseries,N);
	
	//impressão na tela da posição média
	
	cout<<"theta medio apos "<<T<<" segundos:"<<setw(8)<<theta_medio<<" rad"<<endl;
	
	return 0;
}
