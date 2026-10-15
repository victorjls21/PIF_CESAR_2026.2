#include <stdio.h>

int main(void) {
    int celsius;
    double fahrenheit, kelvin;

    printf("Celsius\tFahrenheit\tKelvin\n");
    printf("-------\t----------\t------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        printf("%7d\t%10.2f\t%6.2f\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}
