# 🚌 Programa 6 — Mapa de poltronas de ônibus

Uma simulação de terminal para estudar **matrizes e funções** por meio do cadastro de um ônibus e da seleção de poltronas. Os assentos são organizados em fileiras de quatro posições e exibidos em um mapa textual.

## 💺 O que é apresentado

- Cadastro da quantidade de lugares, dos assentos especiais e de valores associados às passagens.
- Montagem e exibição do mapa de poltronas em uma matriz.
- Seleção de fileira e posição durante a simulação de compra.
- Contagem de lugares ocupados e disponíveis, percentual de ocupação e total calculado das vendas.

### 🔢 Legenda do mapa

| Valor | Representação |
|---:|---|
| `0` | Poltrona comum disponível |
| `1` | Poltrona especial disponível |
| `8` | Poltrona marcada como ocupada |
| `-1` | Posição fora da quantidade cadastrada |

## 📂 Organização

[`mainBus.cpp`](mainBus.cpp) contém a função principal e a matriz; [`funcoes.h`](funcoes.h) reúne o menu, o cadastro, a montagem do mapa e os cálculos. A pasta possui ainda [`mainBus.exe`](mainBus.exe) e uma subpasta [`output/`](output/README.md) com outro executável.

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)
