# 🔎 Conteúdo P2 — Relatório dos exercícios

[← Página inicial](../README.md) · [Conteúdo P1](../CONTEUDO_P1/README.md)

## 📌 Visão geral

A pasta `CONTEUDO_P2` reúne atividades sobre **manipulação de caracteres, ordenação de vetores, busca binária e classificação de equipes**. Os exercícios são independentes, mas compartilham o objetivo de estudar como organizar e consultar informações por meio de algoritmos.

## 📂 Arquivos e subpastas

| Item | Descrição |
|---|---|
| [`Exercicio_01.cpp`](Exercicio_01.cpp) | Processa uma frase: converte letras, realiza contagens, substituições e uma transformação de caracteres. |
| [`Exercicio_02.cpp`](Exercicio_02.cpp) | Ordena dez números inteiros com Bubble Sort e faz uma pesquisa utilizando busca binária. |
| [`Exercicio_01.exe`](Exercicio_01.exe) e [`Exercicio_02.exe`](Exercicio_02.exe) | Executáveis para Windows dos dois exercícios. |
| [`Exercicio_tabelaPontuacao/`](Exercicio_tabelaPontuacao/README.md) | Projeto de cadastro e classificação de 12 times, dividido em arquivos de cabeçalho. |

## 🧠 Síntese do conteúdo

**Exercício 01 — Tratamento de texto.** O código lê uma frase com até 99 caracteres, converte letras para maiúsculas, conta caracteres, vogais e consoantes e acrescenta a expressão ` CHUVANAO`. Depois, substitui determinadas vogais e altera os valores numéricos dos caracteres. Apesar de apresentar a mensagem “Quantidade de palavras”, a função `qtdPalavasTotal` **conta caracteres, não palavras**.

**Exercício 02 — Ordenação e busca.** O programa recebe dez inteiros, apresenta a sequência original, organiza os valores em ordem crescente pelo método Bubble Sort e procura um número por busca binária. Quando o elemento é encontrado, mostra sua posição no vetor, contando a partir de zero.

**Classificação de times.** A subpasta contém um algoritmo que organiza 12 equipes por pontuação decrescente e utiliza os gols como critério de desempate. O funcionamento está detalhado no [relatório específico](Exercicio_tabelaPontuacao/README.md).

## ⚠️ Observações

No primeiro exercício, a concatenação por `strcat` não verifica se há espaço restante no vetor; a entrada máxima de `fgets` não garante capacidade para acrescentar a expressão. Já a classificação de times utiliza os comandos `pause` e `cls`, específicos do Windows.

Os arquivos `.cpp` são a referência para verificar os comportamentos descritos; os executáveis compilados não substituem essa análise.
