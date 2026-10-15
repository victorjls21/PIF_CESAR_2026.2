#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char secreta;
    char tentativa;
    int totalTentativas = 0;

    srand((unsigned int)time(NULL));
    secreta = (char)(rand() % 26 + 'a');

    printf("Adivinhe a letra secreta entre 'a' e 'z'.\n");

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &tentativa);
        totalTentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois de '%c' no alfabeto.\n", tentativa);
        } else if (tentativa > secreta) {
            printf("A letra secreta vem antes de '%c' no alfabeto.\n", tentativa);
        }
    } while (tentativa != secreta);

    printf("Parabens! Voce acertou a letra '%c'.\n", secreta);
    printf("Total de tentativas: %d\n", totalTentativas);

    return 0;
}
