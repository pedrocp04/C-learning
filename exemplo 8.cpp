// Considerando um p�ndulo simples com teta= Asin(wt),
//sendo w= g/l

//Programa com aplica��o void: evolu��o temporal com pendulo

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void f(double A, double g, double l) { //uma fun��o void n�o retorna nada

	double theta;
	double t = 0.0;
	double w;
	w= g/l;
	double T = 10.0; //Tempo total = 10s
	double dt = 0.5; //espa�o de tempo = 0.5 segundos
	int N = T/dt;

	//N � numero total de passos
	for (int i=0; i<N; i++) { //significa que i inicia em 0 com incremento 1 a cada passo N
						// Sendo que para quando i = N-1, pois � i<N, entao nao o inclui
		theta = A*sin(w*t); //primeiro calculo � feito com t = 0
		cout<<"t= "<<t<<" "<<"theta= "<<theta<<endl;
		t += dt; //representa o incremento do tempo
		
}

}

int main() {
	double A = 0.57;
	double g = 9.81;
	double l = 1.0;
	f(A, g, l); //invocal�o da fun��o f(A,g,l)
	
	return 0;
}
