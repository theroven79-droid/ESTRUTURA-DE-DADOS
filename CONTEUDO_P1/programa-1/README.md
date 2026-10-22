# 🧮 Relatório da pasta — Programa 1

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Resumo

Esta pasta apresenta um exercício de **cálculos encadeados por funções**, escrito com instruções de entrada e saída no estilo da linguagem C e salvo com extensão `.cpp`. O programa solicita três números inteiros e mostra três resultados calculados em sequência.

## 📂 Arquivo presente

| Arquivo | Descrição |
|---|---|
| [`programa-1.cpp`](programa-1.cpp) | Contém a função principal, os protótipos e as implementações de `soma`, `multiplicacao` e `cubo`. |

## 🧠 Funcionamento

A primeira função soma os dois primeiros números e acrescenta 10. A segunda soma o terceiro número ao resultado anterior e multiplica essa soma por 3. A terceira eleva o resultado obtido ao cubo.

| Etapa | Cálculo realizado |
|---|---|
| Soma | `n1 + n2 + 10` |
| Multiplicação | `(n3 + resultado_da_soma) * 3` |
| Cubo | `resultado_da_multiplicacao³` |

Para as entradas **1, 2 e 3**, os resultados previstos pelo código são **13, 48 e 110592**, respectivamente.

## 🔎 Considerações

O exercício demonstra passagem de parâmetros e retorno de valores entre funções. Utiliza variáveis do tipo `int`, sem validação específica das entradas ou proteção contra estouro aritmético.

**Fonte da análise:** [`programa-1.cpp`](programa-1.cpp).
