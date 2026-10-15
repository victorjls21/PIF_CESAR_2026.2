#include <stdio.h>

int main(void) {
    float nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f) {
            printf("Erro: nota invalida. Tente novamente.\n");
        }
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota registrada com sucesso!\n");

    return 0;
}
