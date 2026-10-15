#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long int anterior = 1;
    unsigned long long int atual = 1;
    unsigned long long int proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser positivo.\n");
        return 0;
    }

    if (n > 93) {
        printf("Erro: N muito grande para unsigned long long int.\n");
        return 0;
    }

    printf("Sequencia: ");

    if (n >= 1) {
        printf("1");
    }

    if (n >= 2) {
        printf(" 1");
    }

    for (i = 3; i <= n; i++) {
        proximo = anterior + atual;
        printf(" %llu", proximo);
        anterior = atual;
        atual = proximo;
    }

    printf("\n");

    if (n == 1 || n == 2) {
        printf("O %d-esimo termo e 1.\n", n);
    } else {
        printf("O %d-esimo termo e %llu.\n", n, atual);
    }

    return 0;
}
