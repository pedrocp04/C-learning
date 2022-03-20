//Programa com função void

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void f() { //uma função desse tipo não retorna nada
	double a = 2.0;
	double b= 5.0;
	double y;
	
	y = a*sin(b)*cos(a);
	cout<<"y= "<<y<<endl;
}

int main(){
	
	f(); //chama a função e executa
	return 0;
}
