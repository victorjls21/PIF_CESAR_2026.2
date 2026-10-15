#include <stdio.h>

int main(void) {
    double valor;
    double soma = 0.0;
    double media;
    int quantidade = 0;

    printf("Digite valores reais positivos. Digite um valor negativo para encerrar.\n");

    while (1) {
        printf("Valor: ");
        scanf("%lf", &valor);

        if (valor < 0.0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Quantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi informado.\n");
    }

    return 0;
}
