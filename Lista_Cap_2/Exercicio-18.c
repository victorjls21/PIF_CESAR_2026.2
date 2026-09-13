#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}