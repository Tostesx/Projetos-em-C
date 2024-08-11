#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,numero,soma=0;
    float n,p;

    for (i=0;i<6;i++){
        printf("Digite um valor: ");
        scanf("%d",&numero);

        if (numero < 0){
            n++;
        } else {
            p++;
        }

        soma += numero;
    }
    soma=soma/i;
    n=((n/i)*100);
    p=((p/i)*100);
    printf("A media dos numeros e: %d\n",soma);
    printf("O percentual de numeros negativos e: %.2f porcento\nE o de numeros povitivos e: %.2f porcento\n",n,p);

    return 0;
}
