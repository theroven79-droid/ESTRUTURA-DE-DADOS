# 🧮 Programa 1 — Operações com funções

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

Exemplo: entradas `1`, `2`, `3` produzem `13`, `48`, `110592`. As funções `soma`, `multiplicacao` e `cubo` têm protótipos no próprio arquivo.

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| Entrada | Três números inteiros (`n1`, `n2`, `n3`). |
| Soma | `n1 + n2 + 10`. |
| Multiplicação | `(n3 + resultado_da_soma) * 3`. |
| Cubo | Cubo do resultado anterior. |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [programa-1.cpp](programa-1.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |

## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-1/programa-1.cpp -o programa-1
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./programa-1` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

Os cálculos usam `int` sem proteção específica contra entradas inválidas ou estouro aritmético.

**Código para conferência:** [programa-1.cpp](programa-1.cpp).
