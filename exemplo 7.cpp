//Programa com fun��o void

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void f() { //uma fun��o desse tipo n�o retorna nada
	double a = 2.0;
	double b= 5.0;
	double y;
	
	y = a*sin(b)*cos(a);
	cout<<"y= "<<y<<endl;
}

int main(){
	
	f(); //chama a fun��o e executa
	return 0;
}
