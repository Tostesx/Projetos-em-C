#include <stdio.h>
#include <stdlib.h>

int main() {
    float geladinho = 5.00;
    float qtd;
    float valor;
    float trococ;
    float trocod;

    while (qtd != 0) {
        printf("Digite a quantidade do geladinho\n");
        scanf("%f", &qtd);

        valor = geladinho * qtd;
        printf("Custo para o cliente: R$%.2f\n", valor);

        printf("Digite o dinheiro do cliente\n");
        scanf("%f", &trococ);

        trocod = trococ - valor;

        printf("Quanto custou para o cliente: R$%.2f\n", valor);
        printf("Troco a ser entregue ao cliente: R$%.2f\n", trocod);

        if(qtd == 0){
            printf("Fechando o sistema\n");
            break;
        }
    }

    return 0;
}
