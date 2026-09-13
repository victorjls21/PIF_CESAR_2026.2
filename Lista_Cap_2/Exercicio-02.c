#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Caractere digitado: %c\n", caractere);

    return 0;
}