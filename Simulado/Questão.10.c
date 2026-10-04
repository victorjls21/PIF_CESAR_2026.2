#include <stdio.h>

int main (){
    int tempo, horas, minutos, segundos, resto;

    printf("Qual o tempo? ");
    scanf("%i", &tempo);

    horas = tempo / 3600;
    resto = tempo & 3600;

    minutos = resto / 60;
    segundos = resto & 60;

    printf("%i horas, %i minutos e %i segundos\n",
           horas, minutos, segundos);

return 0;
}