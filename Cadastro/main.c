#include <stdio.h>
#include <stdlib.h>

struct cadastro {
   char nome[100];
   int idade;
   float altura;
   char nacionalidade[100];
};




int main(){
    struct cadastro pessoa;
    int contador = 0;

while(1){
       printf("\n--- Cadastro %d ---\n", contador + 1);

        printf("Digite o seu nome: \n");
        scanf("%s", &pessoa.nome);

        printf("Digite sua idade: \n");
        scanf("%d", &pessoa.idade);

        printf("Digite sua altura: \n");
        scanf("%f", &pessoa.altura);

        printf("Digite sua nacionalidade: \n");
        scanf("%s", &pessoa.nacionalidade);

        printf("Os Dados pessoais do cadastro:\n");
        printf("Nome: %s\n", pessoa.nome);
        printf("Idade: %d\n", pessoa.idade);
        printf("Altura: %.2f\n", pessoa.altura);
        printf("Nacionalidade: %s\n", pessoa.nacionalidade);

        contador++;

        printf("\nDeseja cadastrar outra pessoa? (s/n): ");
        char opcao;
        scanf(" %c", &opcao);

        if (opcao != 's' && opcao != 'S')
            break;
}

    printf("\nTotal de cadastros realizados: %d\n", contador);


    return 0;
}
