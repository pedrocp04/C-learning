//operador módulo

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	//Fornecendo dois inteiros:
	
	int num1;
	int num2;
	
	cout<<"Digite o primeiro numero: ";
	cin>>num1;
	
	cout<<"Digite o segundo numero: ";
	cin>>num2;
	
	//Calculo do resto da divisao:
	
	int x;
	x = num1 % num2; //operador módulo, que fornece o resto da divisão entre dois numero inteiros
	
	//impressao do resultado
	
	cout<<"o resultado eh: "<<x<<endl;
	
	return 0;
	
}
