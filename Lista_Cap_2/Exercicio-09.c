#include <stdio.h>

int main(void) {
    int numero1, numero2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);

    /*
     * Para evitar a divisao por zero, verificamos se o segundo
     * numero e diferente de zero antes de realizar a operacao.
     */
    if (numero2 != 0) {
        printf("Divisao: %.2f\n", (double)numero1 / numero2);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}