#include <stdio.h>

int main(void) {
    int i;

    printf("Versao com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\nVersao com while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nVersao com do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");

    /*
       Para este caso, o for e a estrutura mais adequada,
       pois a quantidade de repeticoes e conhecida e a
       inicializacao, a condicao e o incremento ficam no cabecalho.
    */

    return 0;
}
