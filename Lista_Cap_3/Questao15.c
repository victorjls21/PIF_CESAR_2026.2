#include <stdio.h>

int main(void) {
    int num, i;
    int encontrou = 0;

    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Erro: o limite deve ser positivo.\n");
        return 0;
    }

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.");
    }

    printf("\n");

    return 0;
}
