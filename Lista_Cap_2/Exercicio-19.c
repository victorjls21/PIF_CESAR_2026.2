#include <stdio.h>

int main(void) {
    const double VALOR_DIARIA = 30.0;
    const double IMPOSTO = 0.08;

    int dias_trabalhados;
    double valor_bruto, desconto, valor_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    valor_bruto = dias_trabalhados * VALOR_DIARIA;
    desconto = valor_bruto * IMPOSTO;
    valor_liquido = valor_bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Desconto do imposto: R$ %.2f\n", desconto);
    printf("Valor liquido: R$ %.2f\n", valor_liquido);

    return 0;
}