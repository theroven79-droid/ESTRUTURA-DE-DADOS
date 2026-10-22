# ⚽ Classificação de times — Relatório do projeto

[← Conteúdo P2](../README.md) · [Página inicial](../../README.md)

## 📌 Visão geral

Este projeto simula a **classificação de 12 times** por meio de um programa de terminal. Cada equipe possui um nome, uma quantidade de gols e uma pontuação. O objetivo é aplicar vetores paralelos e algoritmos de ordenação, mantendo os dados de cada time associados durante as trocas de posição.

## 📂 Organização dos arquivos

| Arquivo | Responsabilidade |
|---|---|
| [`main.cpp`](main.cpp) | Declara os vetores e organiza a sequência de execução. |
| [`bibliotecas.h`](bibliotecas.h) | Reúne bibliotecas e constantes, incluindo o total de 12 equipes. |
| [`cadastroTimes.h`](cadastroTimes.h) | Recebe nomes, gols e pontos e mostra a tabela inicial. |
| [`ordenacaoPlacar.h`](ordenacaoPlacar.h) | Ordena os times por pontuação, do maior para o menor valor. |
| [`tabelaOrdenada.h`](tabelaOrdenada.h) | Apresenta a classificação após a ordenação por pontos. |
| [`desempate.h`](desempate.h) | Reordena equipes empatadas em pontos, considerando a quantidade de gols. |
| [`tabelaPontuacaoFinal.h`](tabelaPontuacaoFinal.h) | Exibe a classificação após o desempate. |
| [`inserir.txt`](inserir.txt) | Contém 12 conjuntos de dados de exemplo, com nome, gols e pontuação. |
| [`output/`](output/README.md) | Armazena um executável para Windows e seu relatório. |

## 🏆 Critérios de classificação

A pontuação é o **primeiro critério**, em ordem decrescente. Quando dois times têm a mesma quantidade de pontos, a função de desempate coloca primeiro aquele que possui **mais gols**.

| Prioridade | Regra |
|---:|---|
| 1 | Maior pontuação. |
| 2 | Maior número de gols, somente entre equipes empatadas em pontos. |

Não há um terceiro critério implementado para equipes que apresentem pontos e gols iguais. O programa mostra uma tabela inicial, uma tabela ordenada por pontos e uma classificação final.

## 📝 Considerações

Os dados são mantidos apenas durante a execução. O arquivo [`inserir.txt`](inserir.txt) fornece exemplos que podem ser inseridos no terminal ou utilizados como entrada redirecionada. O código de cadastro chama `system("pause")` e `system("cls")`, comandos próprios do Windows, o que limita a portabilidade da apresentação.

A organização dos algoritmos pode ser conferida nos arquivos `.h` e na função principal.
