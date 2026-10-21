# Artefato compilado · Programa 3

[← Programa 3](../README.md) · [← Conteúdo P1](../../README.md) · [↑ Índice geral](../../../README.md)

Esta pasta reúne uma versão executável Windows do exercício de **controle de estoque**. Não contém o código-fonte principal.

| Item | Descrição |
|---|---|
| [programa-3.exe](programa-3.exe) | Binário Windows presente nesta pasta. |
| [../programa-3.cpp](../programa-3.cpp) | Código-fonte do exercício. |
| [../README.md](../README.md) | Requisitos, funções, estrutura e instruções de compilação. |

## Recompilar a partir do código

Na raiz do repositório e com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o estoque
```

Prefira compilar localmente a executar binários de origem não verificada. O código trabalha com até três produtos em memória, sem persistência de dados.
