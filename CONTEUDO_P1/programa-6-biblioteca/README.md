# 🚌 Programa 6 — Relatório do sistema de poltronas

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)

## 📌 Visão geral

O exercício simula o **cadastro de um ônibus e a venda de passagens**. Sua finalidade é aplicar matrizes e funções à representação de poltronas, distinguindo assentos comuns, especiais e ocupados. O programa também apresenta informações sobre a quantidade de lugares e os valores associados às vendas.

## 📂 Organização da pasta

| Arquivo ou pasta | Conteúdo |
|---|---|
| [`mainBus.cpp`](mainBus.cpp) | Declara os dados do ônibus, cria a matriz e inicia o menu. |
| [`funcoes.h`](funcoes.h) | Implementa o cadastro, a montagem do mapa, a exibição e a compra de poltronas. |
| [`mainBus.exe`](mainBus.exe) | Executável para Windows incluído na pasta principal. |
| [`output/`](output/README.md) | Subpasta com outro executável e seu relatório. |

## 💺 Representação dos assentos

A matriz possui **capacidade para 100 fileiras de quatro posições**, conforme as constantes do código. O número de fileiras efetivamente utilizadas é calculado a partir da quantidade de lugares informada no cadastro.

| Valor | Significado |
|---:|---|
| `0` | Assento comum disponível. |
| `1` | Assento especial disponível. |
| `8` | Assento registrado como ocupado. |
| `-1` | Posição não utilizada no mapa. |

O menu permite cadastrar o ônibus, consultar o mapa de poltronas e simular compras. Depois da seleção, o programa atualiza o mapa e calcula a quantidade de lugares ocupados, a disponibilidade e um valor total de vendas.

## ⚠️ Limitações observadas

A compra verifica o número da fileira e da poltrona, mas **não confere se a posição já está ocupada ou corresponde a `-1`** antes de marcá-la com `8`. O menu também anuncia a opção `0 - Sair`, sem implementar o encerramento correspondente. Além disso, não há uma verificação completa dos limites informados no cadastro.

Trata-se de uma simulação de estudo, não de um sistema comercial de emissão de passagens. As situações descritas podem ser conferidas em [`funcoes.h`](funcoes.h).
