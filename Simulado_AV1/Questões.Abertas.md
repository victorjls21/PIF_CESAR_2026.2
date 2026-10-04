1-) C

2-) #include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;

    printf("A idade do aluno eh: %d anos.\n", idade);

    system("PAUSE");

    return 0;
}


3-)
int a = 2, b = 4, c = 5, d = 10;

a += b + c; // Valor final de a = 11
b *= c = d - 2; // Valores finais de b e c = c = 8, b = 32
d %= a + 3; // Valor final de d = 10
a += b += c += 5; // Valores finais de a, b e c = a = 56, b = 45, c = 13 


a = 56
b = 45
c = 13
d = 10


4-)

a) i < j + 2 - Resultado: 1
b) 2 * i - 5 <= j - 4  - Resultado: 1
c) !k && (x + y >= 7.5) - Resultado: 1
d) !(2 == 3) || (5.0 / 2.5 == 2.0) - Resultado: 1
e) 2 == 2 && 3 == 4 || 0 == 0 - Resultado: 1

5-)a-) o while testa a condição antes de executar, já o do while executa antes de testar a condição.
b-) O for é mais indicado quando o número de repetições é conhecido ou quando o controle do laço pode ser organizado em inicialização, condição e incremento. Nesses casos, ele costuma ser mais legível que o while.
c-)Um erro de lógica, onde fica preso e não repete nada, e como a condição é verdadeira ele acabando ficando em um loop infinito.

6-) a-) Porque a variavel soma esta sendo declarada dentro do for
b-)O laço vai percorrer até o 4, e chegando no 5 (continue) ele pula pro 6 e depois percorre até 8 onde ocorre o break.
c-)

#include <stdio.h>
#include <stdlib.h>
int main() {
 int i;

 int soma = 0;

 for (i = 1; i <= 10; i++) {
 if (i == 5) continue;
 if (i == 8) break;
 
 soma += i * i;
 }
 printf("Soma final = %d\n", soma);
 system("PAUSE");

 return 0;
 
}

Soma final = 115
