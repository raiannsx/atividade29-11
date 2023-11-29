#include <stdio.h>
#include <stdlib.h>

int main() {
    struct ficha_usuario {
        char nome[50];
        char rg;
        char CPF;        
        float dataDeNascimento;
    };
    
    struct ficha_usuario usuario[2]; // Correção do nome da estrutura e do array

    int i;

    for (i = 0; i < 2; i++) { 
        printf("Digite o nome do usuario: ");
        fgets(usuario[i].nome, 50, stdin); 
        printf("Digite a data de nascimento: ");
        scanf("%f", &usuario[i].dataDeNascimento);
        
        printf("Digite o RG: ");
        scanf("%d", &usuario[i].rg); // Corrigindo a leitura do RG
        
        printf("Digite o CPF do usuario: ");
        scanf("%d", &usuario[i].CPF);
        
		}
        
    printf("n\exibindo dados do usuario:	");
    
	for (i = 0; i < 2; i++) {
        printf("\nUsuário %d:\n", i + 1);
        printf("data de nascimento: %s", usuario[i].dataDeNascimento);
        printf("rg: %s", usuario[i].rg); 	
        printf("CPF: %. 2f\n", usuario[i].CPF);
   }
     return 0;   
    }
    
