# 📦 Programa 3 — Cadastro e estoque de produtos

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

O código utiliza quatro vetores paralelos com **capacidade de três produtos** e compartilha o mesmo índice para seus atributos. Funções relevantes: `Cprodutos`, `consulta`, `compra`, `ExibirTabela` e `encerrar`. Veja também a [variação com cabeçalho](../programa-3-biblioteca/README.md).

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| 1 — Cadastrar | Registra nome, código, valor e estoque. |
| 2 — Consultar | Localiza produto pelo código. |
| 3 — Comprar | Recebe quantidades, calcula total e atualiza estoque. |
| 4 — Exibir | Lista produtos cadastrados. |
| 5 — Encerrar | Finaliza a aplicação. |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [programa-3.cpp](programa-3.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |
| [output/](output/README.md) | Diretório contendo executável adicional. |


## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o programa-3
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./programa-3` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

O estado do estoque existe somente em memória durante a execução. Não há banco de dados nem persistência.

**Código para conferência:** [programa-3.cpp](programa-3.cpp).
