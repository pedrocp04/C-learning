//Programa para express�o alg�brica

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){
	
	int y; //valor aleat�rio
	int x; 
	int a;
	int b;
	
	cout<<"Digite um valor para x: ";
	cin>>x;
	
	cout<<"Digite um valor para a: ";
	cin>>a;
	
	cout<<"Digite um valor �ra b: ";
	cin>>b;
	
	y = (x + a)*b + b / a -x; //equa��o algebrica. utilizando as mesma regras da aritm�tica
	
	cout<<"y= "<<y<<endl;
		
	
	return 0;
}
