# Lista de Exercícios – Capítulo 3: Estruturas de Repetição

**Disciplina:** Programação Imperativa e Funcional (PIF)  
**Semestre:** 2026.2

Este arquivo reúne as respostas das **Questões 01 a 06 (teóricas e analíticas)**. As questões práticas foram salvas em arquivos `.c` separados, de `Questao07.c` até `Questao28.c`.

---

## Questão 01 — Diferenças fundamentais e tempo de avaliação de laços

### a) Diferença entre `while` e `do-while`

No `while`, a condição é testada **antes** da execução do bloco. Por isso, o bloco pode não ser executado nenhuma vez.

```c
while (condicao) {
    // comandos
}
```

No `do-while`, o bloco é executado **antes** do teste da condição. Portanto, ele é executado pelo menos uma vez.

```c
do {
    // comandos
} while (condicao);
```

### b) Quando usar `for`, `while` e `do-while`

- **`for`**: mais adequado quando sabemos quantas repetições serão realizadas ou quando existe uma variável de controle bem definida. Ex.: imprimir números de 1 a 100.
- **`while`**: mais adequado quando não sabemos previamente quantas repetições ocorrerão e a repetição depende de uma condição. Ex.: ler valores até que o usuário digite um valor negativo.
- **`do-while`**: mais adequado quando o bloco precisa ser executado pelo menos uma vez. Ex.: exibir um menu e repetir até o usuário escolher sair.

### c) Análise de `while (condicao);`

O ponto e vírgula após o `while` não gera erro de compilação. Ele representa um **corpo vazio** para o laço.

```c
while (condicao);
```

Se `condicao` permanecer verdadeira e nenhuma variável usada nela for alterada, o programa ficará preso em um **laço infinito**, executando continuamente o comando vazio.

---

## Questão 02 — Escopo e tempo de vida de variáveis de bloco

Código original:

```c
int i;
for (i = 1; i < 10; i++) {
    int soma = 0;
    soma += i * i;
}
printf("Soma final = %d\n", soma);
```

### a) Por que ocorre erro no `printf` final?

A variável `soma` foi declarada dentro do bloco delimitado pelas chaves do `for`.

```c
{
    int soma = 0;
}
```

Ela só existe e só é visível dentro desse bloco. Quando o programa chega ao `printf`, a variável está fora do seu escopo e não pode ser utilizada.

### b) Por que ainda estaria incorreto se o `printf` ficasse dentro do `for`?

Porque `soma` é criada e inicializada com `0` novamente em cada repetição:

```c
int soma = 0;
```

Assim, ela não acumula os resultados das iterações anteriores. Em cada repetição, ela armazenaria apenas o quadrado do valor atual de `i`.

### c) Código corrigido

```c
#include <stdio.h>

int main(void) {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}
```

**Escopo** é a região do programa em que uma variável pode ser acessada. Uma variável declarada dentro de um bloco `{ }` tem escopo limitado a esse bloco.

**Visibilidade** indica em quais partes do código o identificador pode ser utilizado.

Uma variável local automática existe durante a execução do bloco em que foi declarada. Quando o bloco termina, seu tempo de vida também termina.

---

## Questão 03 — Flexibilidade do laço `for` e omissão de expressões

### a) Sequência do Trecho A

```c
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);
```

Como `a` é inteiro, cada divisão é inteira:

```text
36    18    9    4    2    1
```

Depois de imprimir `1`, ocorre `1 / 2`, cujo resultado inteiro é `0`. Como `0 > 0` é falso, o laço termina.

### b) Comportamento do Trecho B

```c
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);
```

A inicialização e o incremento foram omitidos. A condição do `for` lê um caractere e o armazena em `ch`.

O laço continua enquanto o caractere digitado for diferente de `'X'`.

A expressão:

```c
ch + 1
```

avança uma posição no código do caractere. Por exemplo, se `ch` for `'A'`, `ch + 1` corresponde a `'B'` na codificação usada pelo programa.

Os parênteses em:

```c
(ch = getch())
```

são necessários para garantir que primeiro o caractere seja atribuído a `ch` e depois comparado com `'X'`.

Sem os parênteses:

```c
ch = getch() != 'X'
```

primeiro seria feita a comparação `getch() != 'X'`, e `ch` receberia `0` ou `1`, e não o caractere digitado.

### c) Como interromper `for (;;)`

Pode-se usar `break` quando uma condição de saída for atingida:

```c
for (;;) {
    printf("Laço Infinito\n");

    if (condicao_de_saida) {
        break;
    }
}
```

O `break` encerra imediatamente o laço mais interno em que foi executado.

---

## Questão 04 — Comandos de desvio de fluxo: `break` vs. `continue`

### a) Ação do `break`

Quando `break` é executado dentro de um `for`, `while` ou `do-while`, o laço é encerrado imediatamente e a execução continua na primeira instrução após o laço.

### b) Ação do `continue` em um `for`

O `continue` encerra apenas a iteração atual e faz o programa seguir para a próxima iteração.

Em um `for`, após o `continue`, a próxima expressão executada é a **expressão de incremento** do cabeçalho do laço. Depois disso, a condição é testada novamente.

Exemplo:

```c
for (i = 0; i < 10; i++) {
    if (i == 5) {
        continue;
    }

    printf("%d\n", i);
}
```

Quando `i == 5`, o `printf` é ignorado, depois ocorre `i++` e o laço continua.

### c) `break` em laços aninhados

Se um `break` for executado dentro do laço interno, apenas o **laço interno** será interrompido. O laço externo continua normalmente.

---

## Questão 05 — Operador vírgula e múltiplas variáveis de controle

Código:

```c
int i, j;

for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
```

### a) Quantidade de iterações

O laço executa **5 iterações**.

Os pares são:

```text
(0, 10)
(1, 9)
(2, 8)
(3, 7)
(4, 6)
```

Na próxima atualização, teremos `i = 5` e `j = 5`. A condição `i < j` passa a ser falsa.

### b) Saída exata

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

### c) Versão com `while`

```c
#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}
```

---

## Questão 06 — Laço sem corpo e incremento pós-fixado

Código:

```c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

### a) Valor final de `x`

O valor final será:

```text
6
```

### b) Passo a passo

O operador pós-fixado `x++` usa primeiro o valor atual de `x` na comparação e só depois incrementa a variável.

| Valor usado na comparação | Comparação | Valor de `x` depois do `x++` |
|---:|:---:|---:|
| 0 | `0 < 5` → verdadeiro | 1 |
| 1 | `1 < 5` → verdadeiro | 2 |
| 2 | `2 < 5` → verdadeiro | 3 |
| 3 | `3 < 5` → verdadeiro | 4 |
| 4 | `4 < 5` → verdadeiro | 5 |
| 5 | `5 < 5` → falso | 6 |

Mesmo na comparação que resulta em falso, o incremento acontece. Por isso, `x` termina com valor `6`.

### c) Versão explícita, sem corpo vazio

```c
#include <stdio.h>

int main(void) {
    int x = 0;

    while (x < 5) {
        x++;
    }

    /* Reproduz o incremento que ocorreria no último teste x++ < 5. */
    x++;

    printf("Valor final de x = %d\n", x);

    return 0;
}
```

---

## Organização dos arquivos práticos

```text
Lista-Cap3/
├── README.md
├── Questao07.c
├── Questao08.c
├── Questao09.c
├── Questao10.c
├── Questao11.c
├── Questao12.c
├── Questao13.c
├── Questao14.c
├── Questao15.c
├── Questao16.c
├── Questao17.c
├── Questao18.c
├── Questao19.c
├── Questao20.c
├── Questao21.c
├── Questao22.c
├── Questao23.c
├── Questao24.c
├── Questao25.c
├── Questao26.c
├── Questao27.c
└── Questao28.c
```
