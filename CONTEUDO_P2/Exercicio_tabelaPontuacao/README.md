# ⚽ Relatório da pasta — Classificação de times

[← Conteúdo P2](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Resumo

Esta pasta reúne um programa de terminal que cadastra **12 times de futebol** e organiza uma tabela de classificação. O exercício demonstra o uso de **vetores paralelos, ordenação e desempate**, mantendo nome, número de gols e pontuação associados à mesma equipe.

## 📂 Organização dos arquivos

| Arquivo | Função no projeto |
|---|---|
| [`main.cpp`](main.cpp) | Declara os vetores e define a sequência de cadastro, ordenação, desempate e exibição. |
| [`bibliotecas.h`](bibliotecas.h) | Reúne bibliotecas e constantes do programa. |
| [`cadastroTimes.h`](cadastroTimes.h) | Lê os dados e apresenta a tabela inicial. |
| [`ordenacaoPlacar.h`](ordenacaoPlacar.h) | Ordena as equipes pela pontuação. |
| [`tabelaOrdenada.h`](tabelaOrdenada.h) | Exibe a tabela após a ordenação por pontos. |
| [`desempate.h`](desempate.h) | Reorganiza times empatados conforme o número de gols. |
| [`tabelaPontuacaoFinal.h`](tabelaPontuacaoFinal.h) | Mostra a classificação final. |
| [`inserir.txt`](inserir.txt) | Contém registros de exemplo para as 12 equipes. |
| [`output/`](output/README.md) | Armazena o executável compilado e seu relatório. |

## 🏆 Critérios de classificação

| Prioridade | Regra |
|---:|---|
| 1 | Maior pontuação ocupa a posição superior. |
| 2 | Em caso de empate em pontos, prevalece o maior número de gols. |

Não existe um terceiro critério de desempate para equipes com a mesma pontuação e o mesmo número de gols. O programa exibe a tabela antes da classificação, após a ordenação inicial e depois do desempate.

## 🔎 Considerações

O exercício mantém todos os registros em memória durante sua execução. A rotina de cadastro utiliza `system("pause")` e `system("cls")`, comandos próprios do Windows, que podem não funcionar em outros sistemas.

Os dados de exemplo podem ser consultados em [`inserir.txt`](inserir.txt). Não há integração com campeonato real, serviço externo ou banco de dados.
