#include <stdio.h>

int main()
{
    double nota;

    do
    {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%lf", &nota);

        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida! Tente novamente.\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota valida: %.1f\n", nota);

    return 0;
}