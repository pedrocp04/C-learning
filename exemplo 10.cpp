// Programa utiliza função com retorno: evolução temporal de um pêndulo simples

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;

double f(double A, double g, double l, double t) { //instante de tempo atual
	
	double theta;
	double w;
	w = g/l;
	
	theta = A*sin(w*t);
	
	return theta;
}

int main() {
	
	double A = 0.57;
	double g = 9.81;
	double l = 1.0;
	
	double T= 10.0;
	double dt= 0.5;
	int N= T/dt;
	double t= 0.0;
	
	cout<<fixed;
	cout<<std::setprecision(5);
	
	for(int i=0; i<N; i++){
		cout<<"t = "<<t<<std::setw(16)<<"theta = "<<f(A,g,l,t)<<endl;
		t += dt; //t = t + dt;
	}
	
	
	return 0;
	
}
