# 🔁 Programa 2 — Relatório das tabuadas

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)

## 📌 Visão geral

Esta pasta apresenta um exercício de **laços de repetição aninhados**. Por meio de um menu, o usuário escolhe entre a exibição das tabuadas de 1 a 10 e o cálculo do cubo de cada produto dessas tabuadas.

## 📂 Arquivos encontrados

| Arquivo | Conteúdo |
|---|---|
| [`programa-01.cpp`](programa-01.cpp) | Implementa o menu e as funções `TABUADA_COMPLETA` e `TABUADA_AO_CUBO`. |
| [`programa-02.cpp`](programa-02.cpp) | Está vazio e não contém um segundo exercício. |
| [`programa-01.exe`](programa-01.exe) | Executável para Windows incluído na pasta. |

## 🔎 Análise do funcionamento

A opção **1** apresenta as multiplicações das tabuadas. Na opção **2**, cada produto é elevado ao cubo antes de ser exibido. As duas funções percorrem as tabuadas com um laço externo e utilizam outro laço para calcular os dez elementos de cada uma.

O menu é exibido apenas uma vez. Depois que a opção escolhida é executada, o programa se encerra.

## ⚠️ Observações do código

O título das tabuadas utiliza um índice iniciado em zero, enquanto as contas utilizam esse índice acrescido de um. Por isso, **a numeração mostrada no cabeçalho não corresponde à tabuada calculada**. Na opção 2, a expressão exibida mantém o formato de uma multiplicação comum, embora o resultado informado seja o cubo do produto.

Esses comportamentos podem ser conferidos em [`programa-01.cpp`](programa-01.cpp); nenhum arquivo de código foi alterado.
