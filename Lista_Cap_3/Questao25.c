#include <stdio.h>

int main(void) {
    int n;
    int i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: informe um numero inteiro positivo.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (n > 1 && divisores == 2) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo.\n", n);
    }

    return 0;
}
