#include <stdio.h>

int main(void) {
    int codigo;

    printf("Decimal\tHexadecimal\tCaractere\n");
    printf("-------\t-----------\t--------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%d\t%X\t\t%c\n", codigo, codigo, codigo);
    }

    return 0;
}
