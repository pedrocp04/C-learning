//Programa para criar e ler um array

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;

void g() {
	//Declaração de array especificando o tamanho
	
	int arr1[10];
	
	int n = 10;
	int arr2[n];
	
	for(int i=0; i<n; i++) {
		arr1[i] = 2*i;
		arr2[i]= 3*i;
	}
	
	for(int j = 0; j<n; j++) {
		cout<<arr1[j]<<endl;
		cout<<arr2[j]<<endl;
	}
}


int main() {
	g();
	
	return 0;
}
