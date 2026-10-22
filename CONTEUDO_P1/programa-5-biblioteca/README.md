# 🧮 Programa 5 — Relatório da calculadora

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)

## 📌 Visão geral

Esta pasta reúne uma **calculadora de terminal organizada em arquivos de cabeçalho**. O programa recebe dois números inteiros e realiza cinco operações aritméticas, demonstrando como funções definidas em arquivos separados podem ser utilizadas no mesmo código.

## 📂 Arquivos analisados

| Arquivo | Responsabilidade |
|---|---|
| [`main.cpp`](main.cpp) | Lê os valores e apresenta os resultados das operações. |
| [`bibliotecas.h`](bibliotecas.h) | Reúne as inclusões das bibliotecas e dos demais cabeçalhos. |
| [`soma.h`](soma.h) | Calcula a soma dos dois números. |
| [`subtracao.h`](subtracao.h) | Calcula a diferença entre os valores. |
| [`multiplicacao.h`](multiplicacao.h) | Calcula o produto dos números. |
| [`divisao.h`](divisao.h) | Calcula a divisão, utilizando valores do tipo `float`. |
| [`cubo.h`](cubo.h) | Eleva ao cubo a soma dos dois números. |
| [`main.exe`](main.exe) | Executável para Windows existente na pasta. |

## 🔎 Análise do funcionamento

Após a leitura de `a` e `b`, a função `main` chama as cinco operações e apresenta seus resultados. A divisão é exibida com **duas casas decimais**. A função `cubo` calcula **`(a + b)³`**, e não o cubo separado de cada número.

## ⚠️ Limitação identificada

A função [`divisao`](divisao.h) não verifica se o divisor é zero. Por isso, o exercício deve ser utilizado com um segundo número diferente de zero. Os arquivos permitem estudar a organização de funções, mas não implementam um tratamento completo de erros de entrada.
