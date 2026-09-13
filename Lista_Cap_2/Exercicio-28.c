#include <stdio.h>

int main(void) {
    const double VALOR_POR_HORA = 30.0;
    const double LIMITE_ISENCAO = 12000.0;
    const double ALIQUOTA = 0.10;

    double horas_trabalhadas;
    double salario_bruto;
    double valor_excedente;
    double imposto;
    double salario_liquido;

    printf("Digite a quantidade de horas trabalhadas no ano: ");
    scanf("%lf", &horas_trabalhadas);

    salario_bruto = horas_trabalhadas * VALOR_POR_HORA;

    valor_excedente =
        salario_bruto > LIMITE_ISENCAO
            ? salario_bruto - LIMITE_ISENCAO
            : 0.0;

    imposto = valor_excedente * ALIQUOTA;
    salario_liquido = salario_bruto - imposto;

    printf("Salario bruto anual: R$ %.2f\n", salario_bruto);
    printf("Imposto sobre o valor excedente: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salario_liquido);

    return 0;
}