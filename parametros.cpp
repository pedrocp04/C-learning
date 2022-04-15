//Programa com função void

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void f(double a, double b) {
	double y;
	
	y= a*sin(b)*cos(a);
	cout<<"y= "<<y<<endl;

}

int main() {
	double a= 2.0;
	double b = 5.0;
	f(a,b); //invocação da função(a,b)
	
	return 0;
}
