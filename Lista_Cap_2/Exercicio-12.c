#include <stdio.h>

int main(void) {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    sucessor = numero;

    --antecessor;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    /*
     * O antecessor foi obtido com o operador --.
     * O sucessor foi obtido com o operador ++.
     */

    return 0;
}