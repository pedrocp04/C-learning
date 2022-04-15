// Considerando um pêndulo simples com teta= Asin(wt),
//sendo w= g/l

//Programa com aplicação void: evolução temporal com pendulo

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void f(double A, double g, double l) { //uma função void não retorna nada

	double theta;
	double t = 0.0;
	double w;
	w= g/l;
	double T = 10.0; //Tempo total = 10s
	double dt = 0.5; //espaço de tempo = 0.5 segundos
	int N = T/dt;

	//N é numero total de passos
	for (int i=0; i<N; i++) { //significa que i inicia em 0 com incremento 1 a cada passo N
						// Sendo que para quando i = N-1, pois é i<N, entao nao o inclui
		theta = A*sin(w*t); //primeiro calculo é feito com t = 0
		cout<<"t= "<<t<<" "<<"theta= "<<theta<<endl;
		t += dt; //representa o incremento do tempo
		
}

}

int main() {
	double A = 0.57;
	double g = 9.81;
	double l = 1.0;
	f(A, g, l); //invocalão da função f(A,g,l)
	
	return 0;
}
