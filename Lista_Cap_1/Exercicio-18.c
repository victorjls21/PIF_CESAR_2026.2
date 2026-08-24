#include <stdio.h> /* exemplo visto em sala */

int main()
{
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    printf("%12s%12.2f\n", "Lapis", lapis);
    printf("%12s%12.2f\n", "Borrachas", borrachas);
    printf("%12s%12.2f\n", "Canetas", canetas);
    printf("%12s%12.2f\n", "Cadernos", cadernos);
    printf("%12s%12.2f\n", "Fitas", fitas);

    return 0;
}