# 🔁 Programa 2 — Tabuadas com repetição

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

Funções: `FUNCAO_OPCAO`, `TABUADA_COMPLETA` e `TABUADA_AO_CUBO`. Os laços são aninhados (`for`). O arquivo `programa-02.cpp` está vazio.

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| Opção 1 | Imprime as tabuadas de 1 a 10. |
| Opção 2 | Calcula o cubo de cada produto. |
| Outra opção | Apresenta mensagem de opção não aceita. |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [programa-01.cpp](programa-01.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |
| [programa-02.cpp](programa-02.cpp) | Arquivo vazio, sem implementação. |


## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-2/programa-01.cpp -o programa-01
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./programa-01` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

O cabeçalho de cada bloco usa `i` começando em zero, enquanto as multiplicações utilizam `i + 1`. O menu é apresentado uma vez, sem laço para repetir a seleção.

**Código para conferência:** [programa-01.cpp](programa-01.cpp).
