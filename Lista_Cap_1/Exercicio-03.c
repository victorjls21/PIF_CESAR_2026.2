/* Programa: Calculadora de Média em C */


#include <stdio.h> 

int main() {

    
    float nota1 = 8.9;  /* Declaração de variáveis para armazenar as notas */
    float nota2 = 10;  /* Declaração de variáveis para armazenar as notas */

    float media = (nota1 + nota2) / 2.0; /* formula para o calculo da média arimética das notas*/

    printf("A media final do aluno e %2f/n", media); /* Exibi o resultado na tela do usuario */
 
    return 0; /* indicar se o programa funcionou corretamente */
}