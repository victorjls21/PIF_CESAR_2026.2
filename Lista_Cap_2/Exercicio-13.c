#include <stdio.h>

int main(void) {
    double lado;
    double base_retangulo, altura_retangulo;
    double base_triangulo, altura_triangulo;
    double area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &base_retangulo, &altura_retangulo);

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%lf %lf", &base_triangulo, &altura_triangulo);

    area_quadrado = lado * lado;
    area_retangulo = base_retangulo * altura_retangulo;
    area_triangulo = (base_triangulo * altura_triangulo) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo: %.2f\n", area_triangulo);

    return 0;
}