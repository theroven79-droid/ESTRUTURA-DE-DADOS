# 🧩 Programa 3 modular — Estoque com cabeçalho

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

A função principal inclui [funcoes.h](funcoes.h) e invoca `Menu`, que usa as rotinas do cadastro de produtos. Compare com a [versão anterior](../programa-3/README.md).

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| Ponto de entrada | `programa-3-com-biblioteca.cpp` contém a função `main`. |
| Cabeçalho | `funcoes.h` concentra rotinas e variáveis do exercício. |
| Propósito | Comparar implementação concentrada e organização em cabeçalho. |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [programa-3-com-biblioteca.cpp](programa-3-com-biblioteca.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |

## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-3-biblioteca/programa-3-com-biblioteca.cpp -o programa-3
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./programa-3` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

**Limitação verificada:** o `g++` aponta erros porque algumas funções são chamadas antes de sua declaração no cabeçalho. O comando abaixo serve para **investigar a compilação**, não afirma sucesso.

**Código para conferência:** [programa-3-com-biblioteca.cpp](programa-3-com-biblioteca.cpp).
