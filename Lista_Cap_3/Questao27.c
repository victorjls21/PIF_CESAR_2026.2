#include <stdio.h>

int main(void) {
    int valor;
    int restante;
    int cedulas;
    int i;
    int valoresCedulas[] = {100, 50, 20, 10, 5, 2};
    int totalTipos = 6;

    printf("Digite o valor do saque em reais: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: informe um valor inteiro positivo.\n");
        return 0;
    }

    restante = valor;

    printf("Decomposicao do saque:\n");

    for (i = 0; i < totalTipos; i++) {
        cedulas = 0;

        while (restante >= valoresCedulas[i]) {
            restante -= valoresCedulas[i];
            cedulas++;
        }

        printf("Cedulas de R$ %d: %d\n", valoresCedulas[i], cedulas);
    }

    if (restante != 0) {
        printf("Nao e possivel compor exatamente R$ %d apenas com as cedulas disponiveis.\n", valor);
        printf("Valor restante sem composicao: R$ %d\n", restante);
    }

    return 0;
}
