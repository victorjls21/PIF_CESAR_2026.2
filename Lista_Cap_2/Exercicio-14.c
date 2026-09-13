#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double semiperimetro, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    semiperimetro = (a + b + c) / 2.0;

    area = sqrt(
        semiperimetro *
        (semiperimetro - a) *
        (semiperimetro - b) *
        (semiperimetro - c)
    );

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}