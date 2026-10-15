#include <stdio.h>

int main(void) {
    const int senhaSecreta = 2026;
    int senha;
    int tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            return 0;
        }

        if (tentativa < 3) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}
