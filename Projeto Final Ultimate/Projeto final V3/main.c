#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Projeto{
      int numero;
      float saldo;
      float carteira;
};



int main(){
    struct Projeto projetos[10];
    struct Projeto itens;
    int numeroProjeto;
    float valor;
    char tipoDespesa;

    for ( int i = 0; i < 10; i++){
        projetos[i].saldo = 0;
    }

do{

    do {
        printf("\nDigite o numero do projeto de [0 a 9] ou [-1] para SAIR: ");
        scanf("%d", &numeroProjeto);

    }while (numeroProjeto < -1 || numeroProjeto > 9);


        if(numeroProjeto == -1){
        return 0;

        }
        printf("\nDigite o valor: ");
        scanf("%f", &valor);
        printf("\nDigite o tipo de despesa [R]- Receita, [D]- Despesa: ");
        scanf(" %c", &tipoDespesa);


                if(tipoDespesa == 'R' || tipoDespesa =='r'){
                    projetos[numeroProjeto].saldo += valor;
                    itens.carteira += valor;
                } else if (tipoDespesa == 'D' || tipoDespesa=='d'){
                    projetos[numeroProjeto].saldo -= valor;
                    itens.carteira -= valor;
                } else {
                   printf("\nEscolha inexistente!!!");
                }


     printf("\nSaldos finais dos projetos: RS[%.2f]",itens.carteira);
     for (int i = 0; i < 10; i++){
        printf("\nProjeto [%d]: Saldo final = %.2f",i, projetos[i].saldo);
     }
}while ((numeroProjeto>=0) && (numeroProjeto<=10));

    return 0;
}
