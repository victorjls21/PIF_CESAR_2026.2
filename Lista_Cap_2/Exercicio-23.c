#include <stdio.h>

int main(void) {
    int hora, minuto, segundo;
    int duracao;
    int total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite a hora de inicio: ");
    scanf("%d", &hora);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &minuto);

    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundo);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total_segundos =
        hora * 3600 +
        minuto * 60 +
        segundo +
        duracao;

    hora_final = (total_segundos / 3600) % 24;
    minuto_final = (total_segundos % 3600) / 60;
    segundo_final = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}