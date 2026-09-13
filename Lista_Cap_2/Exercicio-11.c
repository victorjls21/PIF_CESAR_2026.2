#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("Angulo em radianos: %.6f\n", radianos);

    return 0;
}