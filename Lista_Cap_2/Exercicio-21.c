#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /*
     * O numero exibido representa o codigo associado
     * ao caractere na tabela ASCII.
     */
    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", (unsigned char)caractere);

    return 0;
}