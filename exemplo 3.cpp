//Programa para expressão algébrica

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(){
	
	int y; //valor aleatório
	int x; 
	int a;
	int b;
	
	cout<<"Digite um valor para x: ";
	cin>>x;
	
	cout<<"Digite um valor para a: ";
	cin>>a;
	
	cout<<"Digite um valor ára b: ";
	cin>>b;
	
	y = (x + a)*b + b / a -x; //equação algebrica. utilizando as mesma regras da aritmética
	
	cout<<"y= "<<y<<endl;
		
	
	return 0;
}
