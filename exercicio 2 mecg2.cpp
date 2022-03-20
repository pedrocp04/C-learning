//Soma de doins inteiros

#include <iostream> //permite que o programa gere saida de dados na tela

int main(){ //a função main inicia a execução do programa
	
	//declaração de variaveis
	
	int num1; //primeiro inteiro a adicionar
	int num2; //segundo numero a adicionar
	int soma; //soma de num1 e num2
	
	std::cout<<"Entre com o primeiro numero: "; //solicita dados ao usuario
	std::cin>>num1; //le o primeiro int inserido pelo usuario
	
	std::cout<<"Entre com o segundo numero: ";
	std::cin>>num2;
	
	soma = num1 + num2; //calcula a soma de num1 e num2
	
	std::cout<<"Soma= "<<soma<<std::endl; //exibe soma e termina a linha
	
	//compilar com F9
	//executar com F10
	return 0; //indica que o programa terminou com sucesso
}
