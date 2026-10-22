# 📦 Relatório da pasta — Programa 3: controle de estoque

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md) · [Versão com cabeçalho](../programa-3-biblioteca/README.md)

## 📌 Resumo

A pasta contém uma simulação de **cadastro e movimentação de estoque**, feita para praticar vetores e funções. O sistema funciona no terminal e pode armazenar dados de até **três produtos** durante sua execução.

## 📂 Arquivos e subpastas

| Item | Conteúdo |
|---|---|
| [`programa-3.cpp`](programa-3.cpp) | Código-fonte completo, com menu e rotinas de cadastro, consulta, compra e listagem. |
| [`programa-3.exe`](programa-3.exe) | Executável Windows presente na pasta principal. |
| [`output/`](output/README.md) | Subpasta com outro executável compilado e seu relatório. |

## 🧠 Funcionamento do programa

O código utiliza **vetores paralelos** para armazenar nome, código, preço e quantidade. A posição de cada produto é a mesma em todos os vetores.

| Operação | Finalidade |
|---|---|
| Cadastro | Registrar os dados de um produto. |
| Consulta | Localizar um item pelo código. |
| Compra | Selecionar produtos, calcular valores e atualizar quantidades. |
| Listagem | Exibir os produtos e seus dados. |
| Encerramento | Finalizar a aplicação pelo menu. |

## 🔎 Considerações

O programa representa um controle de estoque **temporário**, sem arquivos de dados ou banco de dados. Todos os registros se perdem ao final da execução. A [versão com cabeçalho](../programa-3-biblioteca/README.md) permite comparar outra organização do mesmo exercício, mas apresenta problemas próprios de compilação.

**Fonte da análise:** [`programa-3.cpp`](programa-3.cpp).
