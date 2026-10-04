#include <stdio.h>

int main()
{
    int senha;
    int senhaCorreta = 2026;
    int tentativas;

    for (tentativas = 1; tentativas <= 3; tentativas++)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaCorreta)
        {
            printf("Acesso Concedido!\n");
            return 0;
        }
        else
        {
            printf("Senha incorreta!\n");
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}