#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float aluno1, aluno2, aluno3, aluno4;

    printf("Digite a nota do aluno 1: ");
    scanf("%f", &aluno1);

    printf("Digite a nota do aluno 2: ");
    scanf("%f", &aluno2);

    printf("Digite a nota do aluno 3: ");
    scanf("%f", &aluno3);

    printf("Digite a nota do aluno 4: ");
    scanf("%f", &aluno4);

    float media = (aluno1 + aluno2 + aluno3 + aluno4) / 4;

    printf("A média dos alunos é: %.2f\n", media);

    return 0;
}