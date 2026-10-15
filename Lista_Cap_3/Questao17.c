#include <stdio.h>

int main(void) {
    double nota;
    double soma = 0.0;
    double maior = 0.0;
    double menor = 0.0;
    double media;
    int quantidade = 0;

    printf("Digite as notas entre 0.0 e 10.0. Digite -1.0 para encerrar.\n");

    while (1) {
        printf("Nota: ");
        scanf("%lf", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Digite um valor entre 0.0 e 10.0.\n");
            continue;
        }

        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        quantidade++;
    }

    if (quantidade == 0) {
        printf("Nenhum aluno foi avaliado.\n");
    } else {
        media = soma / quantidade;

        printf("Total de alunos avaliados: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    }

    return 0;
}
