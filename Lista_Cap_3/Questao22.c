#include <stdio.h>

int main(void) {
    int n;
    int linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas do Triangulo de Floyd: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser positivo.\n");
        return 0;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d", numero);

            if (coluna < linha) {
                printf(" ");
            }

            numero++;
        }

        printf("\n");
    }

    return 0;
}
