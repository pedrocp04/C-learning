//Fun��es matem�ticas

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	double a;
	double b;
	double y;
	double z;
	double w;
	
	//Colocando os valores
	cout<<"Digite o valor de a: ";
	cin>>a;
	
	cout<<"Digite o valor de b: ";
	cin>>b;
	
	y = a*sin(b);
	z= a*exp(b); //exp � exponencial
	w = a*sqrt(b); //sqrt � square root, ou seja, raiz quadrada
	
	//Impress�o dos valores
	cout<<"Impressao dos resultados das funcoes: "<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"z= "<<z<<endl;
	cout<<"w= "<<w<<endl;
	
	return 0;
}
