#include <stdio.h>

int main(void) {
    int numero;
    int original;
    int digito;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: informe um numero inteiro positivo.\n");
        return 0;
    }

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}
