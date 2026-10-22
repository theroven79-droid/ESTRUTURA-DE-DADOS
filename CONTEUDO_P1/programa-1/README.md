# 🧮 Programa 1 — Relatório do exercício

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)

## 📌 Visão geral

Esta pasta contém um exercício de **funções com retorno de valores**, desenvolvido para demonstrar como o resultado de uma operação pode ser utilizado na seguinte. O programa solicita três números inteiros e apresenta os resultados de uma soma, de uma multiplicação e de um cálculo ao cubo.

## 📂 Arquivo da pasta

| Arquivo | Descrição |
|---|---|
| [`programa-1.cpp`](programa-1.cpp) | Reúne a função `main`, os protótipos e as implementações de `soma`, `multiplicacao` e `cubo`. |

## 🔎 Análise do funcionamento

A execução começa com a leitura dos números `n1`, `n2` e `n3`. O programa soma os dois primeiros valores e acrescenta 10; em seguida, soma o terceiro número ao resultado obtido e multiplica por 3. Por último, calcula o cubo desse segundo resultado.

| Etapa | Expressão utilizada |
|---|---|
| 1 — Soma | `n1 + n2 + 10` |
| 2 — Multiplicação | `(n3 + resultado_da_soma) * 3` |
| 3 — Cubo | `resultado_da_multiplicacao³` |

Com as entradas `1`, `2` e `3`, os resultados são **13, 48 e 110592**, respectivamente.

## 📝 Considerações

O exercício utiliza funções da biblioteca de entrada e saída da linguagem C, embora o arquivo tenha extensão `.cpp`. Não há validação específica para entradas inválidas nem tratamento de estouro de valores inteiros. Todo o conteúdo analisado está no [código-fonte](programa-1.cpp).
