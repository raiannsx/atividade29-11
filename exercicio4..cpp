#include<stdio.h>

struct dados_pessoa{
	char nome[200];
	char cpf[20];
	int idade ;
	
};
	int main(){
	struct dados_pessoa funcionario;
	struct dados_pessoa cliente;
	
	
	printf("\nsolicitando dados do funcionarios... \n");
	printf("\nDigite o nome do funcionario/n: ");
	gets(funcionario.nome);
	
	printf("\nDigite  a idade do funcionario: ");
	scanf("%d", &funcionario.idade);
	
	
	printf("\nDigite  o cpf do funcionario: ");
	gets(funcionario.cpf);	
	
		
	printf("\nsolicitando dados do cliente... \n");

	printf("\nDigite o nome do cliente/n: ");
	gets(cliente.nome);
	
	printf("\nDigite  a idade do cliente: ");
	scanf("%d", &cliente.idade);
	
	
	printf("\nDigite  o cpf do cliente: ");
	gets(cliente.cpf);	
	
	
	
	
	return 0;
}
	
