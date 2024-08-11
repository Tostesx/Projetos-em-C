#include <stdio.h>
#include <stdlib.h>

int main() {
   int maquina1[25][6] = {{1, 22, 9, 2016, 1, 1243}, {1, 22, 9, 2016, 2, 2143}, {1, 22, 9, 2016, 3, 422}, {1, 22, 9, 2016, 4, 3000}, {1, 22, 9, 2016, 5, 2542},
                        {1, 22, 9, 2016, 6, 5500}, {1, 22, 9, 2016, 7, 4800}, {1, 22, 9, 2016, 8, 4930}, {1, 22, 9, 2016, 9, 3800}, {1, 22, 9, 2016, 10, 1943},
                        {1, 22, 9, 2016, 11, 1003}, {1, 22, 9, 2016, 12, 983}, {1, 22, 9, 2016, 13, 6300}, {1, 22, 9, 2016, 14, 4400}, {1, 22, 9, 3333, 15, 2222},
                        {1, 22, 9, 2016, 16, 5555}, {1, 22, 9, 2016, 17, 5454}, {1, 22, 9, 2016, 18, 4545}, {1, 22, 9, 2016, 19, 4342}, {1, 22, 9, 2016, 20, 3434},
                        {1, 22, 9, 2016, 21, 3232}, {1, 22, 9, 2016, 22, 2121}, {1, 22, 9, 2016, 23, 1212}, {1, 22, 9, 2016, 24, 1010}, {1, 22, 9, 2016, 25, 1243}};


    int totalProduzido = 0;
    for (int i = 0; i < 25; i++) {
        totalProduzido += maquina1[i][5];
    }


    double mediaProducao = (double)totalProduzido / 25;


    int horarioDesejado = 8;
    int producaoNoHorario = 0;

    for (int i = 0; i < 25; i++) {
        if (maquina1[i][4] == horarioDesejado) {
            producaoNoHorario = maquina1[i][5];
            break;
        }
    }


    double mediaHoraAHora[25] = {0};

    for (int i = 0; i < 25; i++) {
        mediaHoraAHora[maquina1[i][4] - 1] += maquina1[i][5];
    }

    for (int i = 0; i < 25; i++) {
        mediaHoraAHora[i] /= 25;
    }


    printf("Total produzido no dia: %d\n", totalProduzido);
    printf("Media de producao: %.2lf\n", mediaProducao);
    printf("Producao no horario %d: %d\n", horarioDesejado, producaoNoHorario);
    printf("Producao media hora a hora:\n");
    for (int i = 0; i < 25; i++) {
        printf("Horario %d: %.2lf\n", i + 1, mediaHoraAHora[i]);
    }

    return 0;
}
