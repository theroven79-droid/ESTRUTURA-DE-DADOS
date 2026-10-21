# ⚽ Classificação de times — Pontuação e desempate

[← Conteúdo P2](../README.md) · [↑ Página inicial](../../README.md)

## 📌 Sobre o projeto

Programa de terminal que cadastra **12 times**, registra seus gols e pontos e exibe uma tabela de classificação. O objetivo é exercitar **vetores paralelos, ordenação e critérios de desempate**.

## 🏆 Regras da classificação

| Prioridade | Critério | Ordem |
|---:|---|---|
| 1 | Pontuação | Do maior para o menor valor |
| 2 | Gols, quando houver empate em pontos | Do maior para o menor valor |

Se dois times tiverem pontuação e gols iguais, **não existe um terceiro critério** implementado.

## 📂 Organização do código

| Arquivo | Responsabilidade |
|---|---|
| [`main.cpp`](main.cpp) | Declara os vetores e determina a sequência das operações. |
| [`bibliotecas.h`](bibliotecas.h) | Bibliotecas e constantes usadas no projeto. |
| [`cadastroTimes.h`](cadastroTimes.h) | Lê os dados e apresenta a tabela inicial. |
| [`ordenacaoPlacar.h`](ordenacaoPlacar.h) | Ordena os times pela pontuação. |
| [`tabelaOrdenada.h`](tabelaOrdenada.h) | Exibe a classificação intermediária. |
| [`desempate.h`](desempate.h) | Reorganiza os empates de pontos conforme a quantidade de gols. |
| [`tabelaPontuacaoFinal.h`](tabelaPontuacaoFinal.h) | Mostra a tabela final. |
| [`inserir.txt`](inserir.txt) | Fornece os registros utilizados como exemplo. |
| [`output/`](output/README.md) | Contém um executável Windows já compilado. |

Os nomes, gols e pontos são armazenados em vetores de posições correspondentes. Durante a ordenação, os valores de um mesmo time são movimentados em conjunto.

## ⚙️ Compilação e execução

Na raiz do repositório, com `g++` instalado:

```bash
g++ CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o classificacao
./classificacao
```

Para fornecer automaticamente os dados de exemplo:

```bash
./classificacao < CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt
```

No Windows, utilize o executável `.exe` correspondente.

## ⚠️ Compatibilidade

O cadastro utiliza `system("pause")` e `system("cls")`, comandos específicos do Windows. Em Linux e macOS, eles podem produzir mensagens de erro. O programa não possui banco de dados nem armazenamento permanente da classificação.
