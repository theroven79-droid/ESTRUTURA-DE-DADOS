# 📦 Programa 3 — Relatório do controle de estoque

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md) · [Versão com cabeçalho](../programa-3-biblioteca/README.md)

## 📌 Visão geral

O programa simula o **cadastro e a movimentação de um pequeno estoque**, utilizando vetores e funções. A capacidade é de três produtos, cujos nomes, códigos, preços e quantidades ficam associados por meio da mesma posição em vetores paralelos.

## 📂 Organização da pasta

| Item | Finalidade |
|---|---|
| [`programa-3.cpp`](programa-3.cpp) | Implementação do menu e das rotinas de cadastro, consulta, compra e exibição. |
| [`programa-3.exe`](programa-3.exe) | Executável para Windows localizado na pasta do programa. |
| [`output/`](output/README.md) | Subpasta com outro executável e um relatório específico. |

## 🔎 Funcionamento identificado

O menu oferece opções para cadastrar produtos, consultar o estoque por código, realizar compras, apresentar a tabela de itens e encerrar a execução. O cadastro verifica informações como **códigos positivos e não repetidos, preços maiores que zero e quantidades não negativas**. Na compra, a quantidade solicitada é comparada com o estoque disponível, e o valor total é calculado a partir dos itens selecionados.

## 📝 Considerações

Os dados ficam apenas na memória e são perdidos quando a aplicação termina. Não há banco de dados nem arquivos destinados ao armazenamento permanente de produtos. A [variação com cabeçalho](../programa-3-biblioteca/README.md) utiliza uma organização diferente, mas apresenta problemas técnicos próprios.

**Código de referência:** [`programa-3.cpp`](programa-3.cpp).
