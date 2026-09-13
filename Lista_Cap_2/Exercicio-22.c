#include <stdio.h>

int main(void) {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula - 'A' + 'a';

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}