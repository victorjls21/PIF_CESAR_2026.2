#include <stdio.h>

int main(void) {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else if (n > 20) {
        printf("Erro: o valor excede o limite seguro de long long int para este calculo.\n");
    } else {
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}
