// Comparando inteiro utilizando if, operadores relacionais
//e operadores de igualdade

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int num1;
	int num2;
	
	cout<<"Entre com dois inteiros para comparar: "<<endl;
	cin>>num1>>num2; //le dois inteiros fornecidos
	
	if(num1 == num2){
		cout<<num1<<"=="<<num2<<endl;
	}
	
	if(num1 != num2){
		cout<<num1<<"!="<<num2<<endl;
	}
	
	if (num1 < num2){
		cout<<num1<<" < "<<num2<<endl;
	}
	
	if(num1 > num2){
		cout<<num1<<" > "<<num2<<endl;
	}
	
	if(num1 <= num2){
		cout<<num1<<" <= "<<num2<<endl;
	}
	
	if(num1 >= num2){
		cout<<num1<<" >= "<<num2<<endl;
	}
	
	return 0;
}
