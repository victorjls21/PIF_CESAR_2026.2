#include <stdio.h>
#include <math.h>

int main(void) {
    double lado_a, lado_b, hipotenusa;

    printf("Digite os valores dos dois catetos: ");
    scanf("%lf %lf", &lado_a, &lado_b);

    hipotenusa = sqrt(
        lado_a * lado_a +
        lado_b * lado_b
    );

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}