# 🧮 Programa 5 — Calculadora modular

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

O [main.cpp](main.cpp) lê dois inteiros, inclui [bibliotecas.h](bibliotecas.h) e imprime os resultados das cinco funções. A divisão é formatada com duas casas decimais.

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| Soma | `a + b` — [soma.h](soma.h). |
| Subtração | `a - b` — [subtracao.h](subtracao.h). |
| Multiplicação | `a * b` — [multiplicacao.h](multiplicacao.h). |
| Divisão | `a / b` — [divisao.h](divisao.h). |
| Cubo | `(a + b)³` — [cubo.h](cubo.h). |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [main.cpp](main.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |

## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-5-biblioteca/main.cpp -o main
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./main` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

A função de divisão **não verifica divisor zero**. Evite usar `b = 0` sem corrigir a implementação.

**Código para conferência:** [main.cpp](main.cpp).
