# 🔎 Relatório da pasta — Conteúdo P2

[← Relatório geral](../README.md) · [← Conteúdo P1](../CONTEUDO_P1/README.md)

## 📌 Resumo

A pasta `CONTEUDO_P2` reúne exercícios de **manipulação de textos, ordenação, busca e classificação de dados**. O conteúdo avança em relação aos programas da P1, explorando operações sobre vetores e critérios de organização dos elementos.

## 📂 Arquivos e subpastas

| Item | Conteúdo |
|---|---|
| [`Exercicio_01.cpp`](Exercicio_01.cpp) | Leitura e transformação de uma frase, com contagens e substituições de caracteres. |
| [`Exercicio_02.cpp`](Exercicio_02.cpp) | Ordenação de dez números com Bubble Sort e pesquisa por busca binária. |
| [`Exercicio_tabelaPontuacao/`](Exercicio_tabelaPontuacao/README.md) | Projeto de classificação de 12 times por pontos e gols. |
| `Exercicio_01.exe` e `Exercicio_02.exe` | Executáveis Windows já compilados dos dois primeiros exercícios. |

## 🧠 Análise dos exercícios

O **Exercício 01** recebe uma frase, converte letras para maiúsculas, conta caracteres, vogais e consoantes, acrescenta o texto ` CHUVANAO` e realiza substituições e alterações nos códigos dos caracteres. A rotina denominada `qtdPalavasTotal` apresenta o rótulo “Quantidade de palavras”, embora conte caracteres. A concatenação também não verifica se há espaço suficiente no vetor de 100 posições.

O **Exercício 02** recebe dez inteiros, apresenta os valores na ordem de entrada e depois em ordem crescente. O algoritmo de ordenação é **Bubble Sort**; a busca binária utiliza o vetor já ordenado e, quando encontra o número procurado, informa sua posição a partir de zero.

A subpasta [`Exercicio_tabelaPontuacao/`](Exercicio_tabelaPontuacao/README.md) contém a classificação de equipes: a maior pontuação determina a ordem principal e a quantidade de gols resolve empates em pontos.

## 🔎 Considerações

Os exercícios são executados no terminal e não constituem um sistema único. No projeto da tabela de times, os comandos `pause` e `cls` são específicos do Windows. Para analisar os detalhes de cada atividade, consulte os códigos-fonte e o [relatório da tabela de pontuação](Exercicio_tabelaPontuacao/README.md).
