#include <iostream>;
#include <cmath>;
#include <iomanip>;

using std::cout;
using std::endl;

void g() {
	//Declaração de array inicializando elementos:
	
	int arr[] = {10,20,30,30,40};
	
	//O compilador cria um array de tamanho  "size" 4
	
	for(int i=0; i<4; i++) {
		cout<<"i: "<<i<<std::setw(8)<<arr[i]<<endl;
	}
	
}

int main(){
	
	g();
	
	return 0;
}
