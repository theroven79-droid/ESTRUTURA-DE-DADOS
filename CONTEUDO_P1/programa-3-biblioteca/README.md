# 🧩 Programa 3 — Estoque com arquivo de cabeçalho

Esta pasta apresenta outra organização do exercício de **controle de estoque**: as funções e os vetores utilizados pelo programa ficam reunidos em um arquivo `.h`, enquanto o arquivo principal se concentra na inicialização e na chamada do menu.

## 📂 Como os arquivos se dividem

| Arquivo | Papel no exercício |
|---|---|
| [`programa-3-com-biblioteca.cpp`](programa-3-com-biblioteca.cpp) | Contém a função `main` e utiliza as rotinas do cabeçalho. |
| [`funcoes.h`](funcoes.h) | Reúne dados dos produtos e funções de cadastro, consulta, compra e listagem. |
| [`programa-3-com-biblioteca.exe`](programa-3-com-biblioteca.exe) | Executável presente na pasta. |

## 📌 Proposta

Assim como a [versão em arquivo único](../programa-3/README.md), o programa representa até três produtos por meio de vetores de nomes, códigos, preços e quantidades. A diferença está na **distribuição das responsabilidades entre os arquivos**, assunto central deste exercício.

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)
