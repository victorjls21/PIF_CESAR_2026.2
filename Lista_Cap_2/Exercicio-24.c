#include <stdio.h>

int main(void) {
    double velocidade_kmh, velocidade_ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

    return 0;
}