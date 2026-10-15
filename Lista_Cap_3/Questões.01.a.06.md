### Questão 01 – Diferenças fundamentais e tempo de avaliação de laços

#### a) Diferença entre `while` e `do-while`

No `while`, a condição é testada **antes** da execução do bloco. Portanto, se a condição já for falsa no primeiro teste, o bloco pode ser executado **zero vezes**.

No `do-while`, o bloco é executado primeiro e a condição só é testada **depois**. Por isso, o bloco é executado **pelo menos uma vez**.

#### b) Quando usar `for`, `while` e `do-while`

- **`for`**: é mais adequado quando se conhece previamente a quantidade de repetições ou quando existe uma variável de controle bem definida. Exemplo: imprimir os números de 1 a 100.
- **`while`**: é indicado quando a repetição depende de uma condição e não se sabe exatamente quantas vezes o bloco será executado. Exemplo: continuar lendo valores enquanto o usuário não digitar um valor de parada.
- **`do-while`**: é útil quando o bloco precisa executar ao menos uma vez antes da condição ser testada. Exemplo: menus e validação de entrada de dados.

#### c) Análise de `while (condicao);`

Esse trecho **não é um erro de compilação**. O ponto-e-vírgula forma um **corpo vazio** para o `while`.

```c
while (condicao);
```

Se `condicao` for verdadeira e não houver nada que altere seu valor durante a repetição, o programa ficará preso em um **laço infinito vazio**. As instruções seguintes não serão executadas enquanto a condição permanecer verdadeira.

---

### Questão 02 – Escopo e tempo de vida de variáveis de bloco

#### a) Por que o `printf` final gera erro?

A variável `soma` foi declarada **dentro do bloco do `for`**:

```c
for (i = 1; i < 10; i++) {
    int soma = 0;
    soma += i * i;
}
```

Por isso, seu escopo termina na chave `}` que fecha o laço. Fora desse bloco, `soma` não é visível. Assim, o `printf` tenta utilizar uma variável que não existe naquele escopo.

#### b) Por que mover o `printf` para dentro do `for` ainda produziria um resultado incorreto?

Porque `soma` é inicializada com zero **a cada nova iteração**:

```c
int soma = 0;
```

Logo, ela não acumula os quadrados anteriores. Em cada passagem, armazenaria apenas o quadrado do valor atual de `i`.

#### c) Código corrigido

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

**Visibilidade** indica em quais pontos do programa uma variável pode ser acessada.  
**Escopo de bloco** significa que uma variável declarada entre `{` e `}` só pode ser utilizada dentro daquele bloco.  
**Tempo de vida** é o período em que a variável existe durante a execução. Uma variável automática declarada em um bloco passa a existir quando o bloco é executado e deixa de existir ao sair dele.

---

### Questão 03 – Flexibilidade do laço `for` e omissão de expressões

#### a) Saída do Trecho A

Código:

```c
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);
```

A sequência impressa é:

```text
36    18    9    4    2    1
```

Isso acontece porque a divisão é inteira. Depois de `1`, a operação `1 / 2` produz `0`, fazendo a condição `a > 0` se tornar falsa.

#### b) Comportamento do Trecho B

```c
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);
```

O laço não possui inicialização nem incremento no cabeçalho. A cada teste, `getch()` lê um caractere e esse valor é atribuído a `ch`. O laço continua enquanto o caractere digitado for diferente de `'X'`.

A expressão `ch + 1` utiliza o código numérico do caractere e imprime o **caractere seguinte** na tabela de caracteres. Por exemplo, se `ch` for `'A'`, `ch + 1` corresponde a `'B'`.

Os parênteses em `(ch = getch())` são necessários porque o operador `!=` possui precedência maior que o operador de atribuição `=`. Sem os parênteses, a comparação seria feita primeiro e `ch` receberia apenas `0` ou `1`, em vez do caractere lido.

#### c) Como interromper `for (;;)` programaticamente

A forma mais comum é utilizar `break` quando uma condição de saída for atingida:

```c
for (;;) {
    if (condicao_de_saida) {
        break;
    }

    printf("Laco em execucao\n");
}
```

O `break` encerra imediatamente o laço e a execução continua na primeira instrução após ele.

---

### Questão 04 – Comandos de desvio de fluxo: `break` vs. `continue`

#### a) Ação do `break`

Quando `break` é executado dentro de um `for` ou `while`, o laço é encerrado **imediatamente**. O programa continua na primeira instrução localizada depois do laço.

#### b) Ação do `continue` no `for`

Quando `continue` é executado, o restante do corpo da iteração atual é ignorado. Em um laço `for`, a próxima etapa executada é a **expressão de incremento** do cabeçalho. Depois disso, a condição é testada novamente.

#### c) `break` em laços aninhados

Se um `break` for executado dentro do laço interno, ele interrompe **somente o laço mais interno** em que está localizado. O laço externo continua sua execução normalmente.

---

### Questão 05 – Operador vírgula e múltiplas variáveis de controle

Código analisado:

```c
int i, j;

for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
```

#### a) Quantidade de iterações

O laço executa **5 iterações**.

Os pares de valores são:

```text
(0, 10)
(1, 9)
(2, 8)
(3, 7)
(4, 6)
```

Depois da quinta iteração, `i` passa a valer `5` e `j` passa a valer `5`. Como `5 < 5` é falso, o laço termina.

#### b) Saída exata

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

#### c) Mesma lógica usando `while`

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

### Questão 06 – Laço sem corpo e incremento pós-fixado

Código:

```c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

#### a) Valor final de `x`

O valor impresso é:

```text
Valor final de x = 6
```

#### b) Passo a passo de `x++ < 5`

O operador pós-fixado `x++` utiliza primeiro o valor atual de `x` na comparação e **só depois incrementa** a variável.

| Teste | Valor usado na comparação | Comparação | Valor de `x` depois do `x++` |
|---|---:|---|---:|
| 1 | 0 | `0 < 5` → verdadeiro | 1 |
| 2 | 1 | `1 < 5` → verdadeiro | 2 |
| 3 | 2 | `2 < 5` → verdadeiro | 3 |
| 4 | 3 | `3 < 5` → verdadeiro | 4 |
| 5 | 4 | `4 < 5` → verdadeiro | 5 |
| 6 | 5 | `5 < 5` → falso | 6 |

Mesmo no teste que resulta em falso, o pós-incremento ainda acontece. Por isso, `x` termina valendo `6`.

#### c) Reescrita explícita e clara

```c
#include <stdio.h>

int main(void) {
    int x = 0;

    while (x <= 5) {
        x++;
    }

    printf("Valor final de x = %d\n", x);

    return 0;
}
```

---

## Parte II – Questões Práticas

Os códigos finais das questões práticas estão separados nos arquivos:

`questao07.c` até `questao28.c`.
