#include <stdio.h>

int main() {
    float Acai_10kg = 180;
    float fracao_300ml = Acai_10kg / 33.33;
    float fracao_500ml = Acai_10kg / 20;
    float fracao_700ml = Acai_10kg / 14.28;
    float Margem_de_lucro = 1.50;

    int opcao;

    printf("Digite [1] para 300ml, [2] para 500ml, [3] para 700ml: \n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        float tamanho_porcao = fracao_300ml * Margem_de_lucro;
        printf("O preco de venda para 300ml sem margem eh: %.2f\n", fracao_300ml);
        printf("O preco de venda para 300ml e: %.2f\n", tamanho_porcao);
    } else if (opcao == 2) {
        float tamanho_porcao = fracao_500ml * Margem_de_lucro;
        printf("O preco de venda para 500ml sem margem eh: %.2f\n", fracao_500ml);
        printf("O preco de venda para 500ml e: %.2f\n", tamanho_porcao);
    } else if (opcao == 3) {
        float tamanho_porcao = fracao_700ml * Margem_de_lucro;
        printf("O preco de venda para 700ml sem margem eh: %.2f\n", fracao_700ml);
        printf("O preco de venda para 700ml e: %.2f\n", tamanho_porcao);
    } else {
        printf("Opcao invalida. Por favor, digite 1, 2 ou 3.\n");
    }

    return 0;
}
