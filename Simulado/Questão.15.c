#include <stdio.h>

int main()
{
    int n, linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Digite um numero inteiro positivo.\n");
        return 0;
    }

    for (linha = 1; linha <= n; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}