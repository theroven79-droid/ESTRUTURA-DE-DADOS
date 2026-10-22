# 🧮 Programa 5 — Calculadora com funções separadas

Esta calculadora de terminal recebe dois números inteiros e apresenta **cinco operações aritméticas**. Cada operação está definida em seu próprio arquivo de cabeçalho, permitindo estudar uma organização de código baseada em funções menores.

## 🔢 Operações disponíveis

| Arquivo | Operação realizada |
|---|---|
| [`soma.h`](soma.h) | Soma os dois valores. |
| [`subtracao.h`](subtracao.h) | Calcula a diferença. |
| [`multiplicacao.h`](multiplicacao.h) | Multiplica os números. |
| [`divisao.h`](divisao.h) | Calcula o quociente e o apresenta com duas casas decimais. |
| [`cubo.h`](cubo.h) | Eleva **a soma dos dois números** ao cubo. |

O arquivo [`main.cpp`](main.cpp) recebe os valores e exibe os resultados, enquanto [`bibliotecas.h`](bibliotecas.h) concentra as inclusões necessárias. Há também um [executável para Windows](main.exe) na pasta.

O exercício destaca a chamada de funções com argumentos e o reaproveitamento dessas rotinas em um mesmo programa.

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)
