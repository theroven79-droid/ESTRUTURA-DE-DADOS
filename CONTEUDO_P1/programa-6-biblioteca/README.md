# 🚌 Relatório da pasta — Programa 6: poltronas de ônibus

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Resumo

Esta pasta contém uma **simulação acadêmica de controle de poltronas e venda de passagens**, desenvolvida para exercitar matrizes e funções. O programa permite cadastrar características de um ônibus, visualizar lugares, selecionar passagens e consultar dados de ocupação.

## 📂 Arquivos e subpastas

| Item | Conteúdo |
|---|---|
| [`mainBus.cpp`](mainBus.cpp) | Declara as variáveis e a matriz de assentos e chama o menu principal. |
| [`funcoes.h`](funcoes.h) | Implementa as rotinas de cadastro, visualização, compra e relatório. |
| [`mainBus.exe`](mainBus.exe) | Executável Windows incluído no diretório principal. |
| [`output/`](output/README.md) | Subpasta com outro executável e seu relatório. |

## 💺 Organização dos assentos

O código declara uma matriz com **100 linhas e quatro colunas**. Os valores armazenados indicam o estado das posições:

| Valor | Interpretação |
|---:|---|
| `0` | Poltrona comum disponível. |
| `1` | Poltrona especial disponível. |
| `8` | Poltrona marcada como comprada. |
| `-1` | Posição não cadastrada como poltrona. |

O relatório do programa apresenta informações de ocupação, disponibilidade e valores registrados nas vendas.

## ⚠️ Limitações identificadas

A seleção de lugares não impede completamente a escolha de poltronas já compradas ou de posições com o valor `-1`. Além disso, o menu mostra a opção **`0 - Sair`**, mas não contém um tratamento que finalize o laço principal.

Essas limitações pertencem à implementação atual. O exercício é útil para estudar matrizes, mas não corresponde a um sistema de bilhetagem pronto para utilização real.
