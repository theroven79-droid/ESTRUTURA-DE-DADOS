# 📦 Programa 3 — Cadastro e controle de estoque

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md) · [Versão com cabeçalho](../programa-3-biblioteca/README.md)

## 📌 Sobre o programa

Simulação de controle de estoque feita para praticar **vetores, funções e menus no terminal**. Permite cadastrar e consultar produtos, registrar compras e visualizar os itens armazenados.

O sistema utiliza quatro vetores paralelos — nome, código, preço e quantidade — com capacidade para **até três produtos**. O mesmo índice relaciona os dados de cada item.

## ✨ Operações disponíveis

| Opção | Ação | Resultado |
|---:|---|---|
| 1 | Cadastrar | Registra os dados de um produto. |
| 2 | Consultar | Procura um produto pelo código informado. |
| 3 | Comprar | Calcula subtotais e atualiza o estoque. |
| 4 | Exibir tabela | Apresenta os produtos cadastrados. |
| 5 | Encerrar | Finaliza a execução. |

As funções e o menu estão implementados em [`programa-3.cpp`](programa-3.cpp). A pasta [`output/`](output/README.md) contém outro executável já compilado.

## ⚙️ Como executar

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o estoque
./estoque
```

O programa é interativo: escolha a operação no menu e digite os dados solicitados. No Windows, utilize o executável correspondente.

## ⚠️ Limitações

Os registros permanecem **somente em memória** e são perdidos ao encerrar a aplicação. A capacidade é fixa, e não existe integração com banco de dados. Para comparar a organização do código, consulte a [versão com cabeçalho](../programa-3-biblioteca/README.md), que apresenta limitações próprias de compilação.
