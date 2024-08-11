#include <stdio.h>
#include <stdlib.h>

struct lhamas {
    int lhama;
    int ganho;
    int perda;
    int ano;
};

// Fun��o para inicializar a estrutura
struct lhamas inicializarLhamas() {
    struct lhamas novaLhama;
    novaLhama.lhama = 20;
    novaLhama.ganho = 0;
    novaLhama.perda = 0;
    novaLhama.ano = 0;
    return novaLhama;
}

// Fun��o para adicionar um n�mero espec�fico de anos e calcular ganhos e perdas
void adicionarAnos(struct lhamas *lhama, int anos) {
    for (int i = 0; i < anos; i++) {
        lhama->ano++;
        lhama->ganho += lhama->lhama / 3;  // Ganho � 1/3 da quantidade atual de lhamas
        lhama->perda += lhama->lhama / 4;  // Perda � 1/4 da quantidade atual de lhamas
    }
}

int main() {
    // Inicializar a estrutura
    struct lhamas minhasLhamas = inicializarLhamas();

    // Ler o n�mero de anos do teclado
    int anos;
    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    // Adicionar os anos e calcular ganhos e perdas
    adicionarAnos(&minhasLhamas, anos);

    // Exibir resultados
    printf("Ano: %d\n", minhasLhamas.ano);
    printf("Ganho total: %d\n", minhasLhamas.ganho);
    printf("Perda total: %d\n", minhasLhamas.perda);

    return 0;
}
