#include <stdio.h>

int main()
{
    int dias;
    double salarioBruto, gratificacao, imposto, salarioLiquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 45.0;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;

    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\n--- HOLERITE ---\n");
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}