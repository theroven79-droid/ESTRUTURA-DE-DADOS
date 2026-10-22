# 🧮 Relatório da pasta — Programa 5: operações aritméticas

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Resumo

Esta pasta reúne uma **calculadora de terminal** que lê dois números inteiros e apresenta cinco resultados matemáticos. O exercício demonstra como distribuir funções entre arquivos de cabeçalho e utilizá-las no programa principal.

## 📂 Organização dos arquivos

| Arquivo | Responsabilidade |
|---|---|
| [`main.cpp`](main.cpp) | Recebe os dois valores e exibe os resultados. |
| [`bibliotecas.h`](bibliotecas.h) | Agrupa as inclusões necessárias ao exercício. |
| [`soma.h`](soma.h) | Calcula `a + b`. |
| [`subtracao.h`](subtracao.h) | Calcula `a - b`. |
| [`multiplicacao.h`](multiplicacao.h) | Calcula `a * b`. |
| [`divisao.h`](divisao.h) | Calcula `a / b`. |
| [`cubo.h`](cubo.h) | Calcula o cubo de `a + b`. |
| [`main.exe`](main.exe) | Executável Windows presente na pasta. |

## 🧠 Síntese técnica

O programa solicita os valores `a` e `b` e chama as funções de forma sequencial. O resultado da divisão é mostrado com duas casas decimais. A operação chamada `cubo` **não eleva cada número individualmente**: ela calcula `(a + b)³`.

## ⚠️ Observação

A função de divisão não verifica se o segundo valor é zero. Portanto, a implementação tem uma limitação importante de tratamento de entradas. Os arquivos `.h` concentram as definições utilizadas pelo exercício, e o [`main.cpp`](main.cpp) estabelece a sequência de execução.
