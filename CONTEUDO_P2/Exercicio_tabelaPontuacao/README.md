# ⚽ Classificação de times — Pontos e gols

Um programa de terminal que recebe os dados de **12 equipes** e organiza uma tabela de classificação. Cada time possui um nome, uma quantidade de gols e uma pontuação; essas informações são mantidas em vetores relacionados durante a ordenação.

## 🏆 Como a classificação é construída

O programa apresenta os times cadastrados, organiza a tabela por **pontuação decrescente** e depois aplica um segundo critério: entre equipes empatadas em pontos, fica à frente aquela com **mais gols**.

| Prioridade | Critério |
|---:|---|
| 1 | Maior número de pontos |
| 2 | Maior número de gols, em caso de empate na pontuação |

## 📂 Arquivos do projeto

| Arquivo | Responsabilidade |
|---|---|
| [`main.cpp`](main.cpp) | Define os vetores e chama as etapas do programa. |
| [`bibliotecas.h`](bibliotecas.h) | Reúne bibliotecas e constantes utilizadas. |
| [`cadastroTimes.h`](cadastroTimes.h) | Recebe os dados das equipes e mostra a primeira tabela. |
| [`ordenacaoPlacar.h`](ordenacaoPlacar.h) | Ordena por pontuação. |
| [`desempate.h`](desempate.h) | Utiliza os gols para ordenar equipes empatadas. |
| [`tabelaOrdenada.h`](tabelaOrdenada.h) | Exibe a classificação por pontos. |
| [`tabelaPontuacaoFinal.h`](tabelaPontuacaoFinal.h) | Apresenta a tabela após o desempate. |
| [`inserir.txt`](inserir.txt) | Contém dados de exemplo de 12 times. |
| [`output/`](output/README.md) | Guarda um executável do exercício. |

A atividade combina **vetores paralelos, funções e ordenação**, mostrando por que nome, gols e pontuação devem ser movimentados juntos durante a classificação.

[← Conteúdo P2](../README.md) · [Página inicial](../../README.md)
