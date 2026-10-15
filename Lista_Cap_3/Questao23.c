#include <stdio.h>

int main(void) {
    int l;
    int linha, coluna;

    do {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &l);

        if (l < 3 || l > 20) {
            printf("Valor invalido.\n");
        }
    } while (l < 3 || l > 20);

    for (linha = 0; linha < l; linha++) {
        for (coluna = 0; coluna < l; coluna++) {
            if (linha == 0 || linha == l - 1 || coluna == 0 || coluna == l - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
