#include <stdio.h>

int main(void) {
    int n;
    int linha, coluna;

    do {
        printf("Digite uma dimensao impar entre 3 e 19: ");
        scanf("%d", &n);

        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Valor invalido.\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (linha = 0; linha < n; linha++) {
        for (coluna = 0; coluna < n; coluna++) {
            if (coluna == linha || coluna == n - 1 - linha) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
