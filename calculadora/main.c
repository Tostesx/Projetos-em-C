#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, resultado;
    char sinal;
    printf("Digite o primeiro numero\n");
    scanf("%d",&numero1);

    printf("Digite o sinal da operacao\n");
    scanf(" %c",&sinal);

    printf("Digite o segundo numero\n");
    scanf("%d",&numero2);


    if(sinal == '+'){
        resultado = numero1 + numero2;

    }else if(sinal == '-'){
        resultado = numero1 - numero2;

    }else if(sinal == '*'){
        resultado = numero1 * numero2;

    }else if(sinal == '/'){
        resultado = numero1 / numero2;
    }else{
        printf("Erro!!");
    }

    printf("O resultado e: [%d]",resultado);


    return 0;
}
