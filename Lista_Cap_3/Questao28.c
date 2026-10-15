#include <stdio.h>

int main(void) {
    int opcao;
    double salario;
    double novoSalario;
    double desconto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%lf", &salario);

                if (salario < 0.0) {
                    printf("Salario invalido.\n");
                } else if (salario <= 2000.0) {
                    novoSalario = salario * 1.15;
                    printf("Novo salario com reajuste de 15%%: R$ %.2f\n", novoSalario);
                } else {
                    novoSalario = salario * 1.10;
                    printf("Novo salario com reajuste de 10%%: R$ %.2f\n", novoSalario);
                }
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%lf", &salario);

                if (salario < 0.0) {
                    printf("Salario invalido.\n");
                } else if (salario <= 3000.0) {
                    desconto = salario * 0.08;
                    printf("Desconto de IR (8%%): R$ %.2f\n", desconto);
                } else {
                    desconto = salario * 0.15;
                    printf("Desconto de IR (15%%): R$ %.2f\n", desconto);
                }
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
