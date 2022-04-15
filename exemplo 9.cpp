#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void f(double A, double g, double l) {
	
	double theta;
	double t = 0.0;
	double w;
	w = g/l;
	double T = 10.0; //tempo final
	double dt = 0.5; //passo de tempo
	int N = T/dt;
	int i = 0;
	
	while (i < N) { //coloca condição
	 
	 theta = A*sin(w*t);
	 cout<<"t "<<t<<" "<<"theta= "<<theta<<endl;
	 t += dt;
	 i += 1; //i= i + 1
	}
}

int main() {
	double A = 0.57;
	double g = 9.81;
	double l = 1.0;
	f(A, g, l); //invocalão da função f(A,g,l)
	
	return 0;
}
