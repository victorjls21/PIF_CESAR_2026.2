#include <stdio.h>

int main(void) {
    int a, b;
    int numero, divisor;
    int quantidadeDivisores;
    long long int soma = 0;

    do {
        printf("Digite A (positivo): ");
        scanf("%d", &a);

        printf("Digite B (positivo e maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos. E necessario garantir 0 < A < B.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Numeros primos no intervalo [%d, %d]:\n", a, b);

    for (numero = a; numero <= b; numero++) {
        quantidadeDivisores = 0;

        for (divisor = 1; divisor <= numero; divisor++) {
            if (numero % divisor == 0) {
                quantidadeDivisores++;
            }
        }

        if (numero > 1 && quantidadeDivisores == 2) {
            printf("%d ", numero);
            soma += numero;
        }
    }

    printf("\nSoma total dos primos: %lld\n", soma);

    return 0;
}
