#include <stdio.h>
#include <stdlib.h>

struct Projeto {
    int numero;
    float saldo;
};

struct Projeto projetos[10];

int main(){
    int numeroProjeto;
    float valor;
    char tipoDespesa;

    // Inicializa os projetos
    for (int i = 0; i < 10; i++){
        projetos[i].numero = i;
        projetos[i].saldo = 0.0;
    }

    // Loop principal
    while (1){
        printf("Digite o numero do projeto de [0 a 9] ou [-1] para SAIR:");
        scanf("%d", &numeroProjeto);

        if(numeroProjeto == -1){
            break;
        }

        printf("Digite o valor: \n");
        scanf("%f", &valor);
        printf("Digite o tipo de despesa [R]- Receita, [D]- Despesa: ");
        scanf(" %c", &tipoDespesa); // Corrigido para ignorar o caractere de nova linha

        if(tipoDespesa == 'R' || tipoDespesa == 'r'){
            projetos[numeroProjeto].saldo += valor;
        } else if (tipoDespesa == 'D' || tipoDespesa == 'd'){
            projetos[numeroProjeto].saldo -= valor;
        } else {
            printf("Tipo de Despesa invalida!!!\n");
        }
    }

    // Imprime os saldos finais dos projetos
    printf("Saldos finais dos projetos: \n");
    for (int i = 0; i < 10; i++){
        printf("Projeto %d: Saldo final = %.2f\n", projetos[i].numero, projetos[i].saldo);
    }

    return 0;
}
