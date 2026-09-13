#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int dado1, dado2, dado3;

    srand((unsigned int)time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Primeiro dado: %d\n", dado1);
    printf("Segundo dado: %d\n", dado2);
    printf("Terceiro dado: %d\n", dado3);

    return 0;
}