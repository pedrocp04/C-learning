// Programa para estudo de caso 1 (trem em rota esferica)

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

float pi= acos(-1);

void Cinematica(float phi, float vt, float a) {
	
	//Aceleração tangencial
	float at = a*cos(phi);
	//cout<<at<<" m/s2 "<<endl; //imprime valor calculado
	
	//Aceleração centripeta
	float ac = a*sin(phi);
	
	//Cálculo de rho;
	// ac = omega*omega*rho;
	// vt = omega*rho;
	//vt/rho = omega;
	
	float rho= (vt*vt)/ac; //vt*vt= vt^2
	//cout<<rho<<"m/s2"<<endl;
	
	//Aceleração angular dvdt
	
	float dvdt = at/rho;
	//cout<<dwdt<<"rad/s2"<<endl;
	
	//Velocidade tangencial variando no tempo t
	float T= 10.;
	float t= 0.;
	float dt= 1.;
	int N= T/dt;
	
	for (int i=0; i<N; i++){
		
		float v = (vt+dvdt)*t;
		cout<<"v(t)= "<<v<<endl;
		t+= dt; //t= t + dt
	}
}



int main() {
	
	//Parametros:
	float phi = 75.0*(pi/180.0);
	float vt = 20.; //velocidade tangencial
	float a = 14.; //aceleração
	
	Cinematica(phi, vt, a);
	
	return 0;
}
