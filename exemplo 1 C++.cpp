// Soma de dois inteiros

#include <iostream> //permite que o programa gere saída de dados na tela

int main(){ //a função main inicia a execução do programa

	// declaração de variáveis
	
	int num1;  //primeiro inteiro a adicionar
	int num2; //segundo inteiro a adicionar
	int sum; //soma de num1 e num2
	
	std::cout<<"Entre com o primeiro numero: "; //cout pra print na tela //solicita dados para o usuario
	std::cin>>num1; //le o primeiro inteiro inserido pelo usuário em num11  //entrada de dados
	
	std::cout<<"Entre com o segundo numero: ";
	std::cin>>num2;
	
	sum = num1 + num2; //calcula a soma de num1 e num2
	
	std::cout<<"A soma eh: "<<sum<<std::endl; //pula uma linha //exibe a soma
	
	//sompilar com F9
	//Executar com F10
	
	
	return 0;  //indica que o programa terminou com sucesso
}
