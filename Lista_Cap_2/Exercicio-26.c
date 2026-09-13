#include <stdio.h>

int main(void) {
    double comprimento, largura;
    double preco_por_metro;
    double perimetro;
    double quantidade_arame;
    double custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%lf", &largura);

    printf("Digite o preco do metro de arame: R$ ");
    scanf("%lf", &preco_por_metro);

    perimetro = 2.0 * (comprimento + largura);
    quantidade_arame = perimetro * 3.0;
    custo_total = quantidade_arame * preco_por_metro;

    printf("Quantidade de arame: %.2f metros\n", quantidade_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}