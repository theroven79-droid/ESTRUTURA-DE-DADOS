# Conteúdo P2 — Strings, ordenação e busca

[Voltar ao índice do repositório](../README.md)

Esta pasta contém exercícios de transformação de frases, ordenação de números, busca binária e classificação de times.

## Exercícios disponíveis

| Arquivo principal | Conteúdo |
|---|---|
| [Exercicio_01.cpp](Exercicio_01.cpp) | Leitura, contagem e transformação de caracteres de uma frase |
| [Exercicio_02.cpp](Exercicio_02.cpp) | Ordenação crescente de dez inteiros e busca binária |
| [main.cpp da tabela de pontuação](Exercicio_tabelaPontuacao/main.cpp) | Cadastro e classificação de 12 times por pontos e gols |

## Exercício 1 — Manipulação de uma frase

O [Exercicio_01.cpp](Exercicio_01.cpp) executa as seguintes etapas sobre o mesmo vetor de caracteres:

1. Lê a frase e remove a quebra de linha.
2. Converte os caracteres para maiúsculas.
3. Conta caracteres, vogais e consoantes.
4. Executa a rotina `qtdPalavasTotal`.
5. Acrescenta o texto ` CHUVANAO`.
6. Substitui A e I por B e substitui E, O e U por 3.
7. Soma 3 ao código de cada um dos cinco primeiros caracteres e 5 ao código de cada um dos demais.

A rotina `qtdPalavasTotal` exibe o rótulo “Quantidade de palavras”, mas conta caracteres. As contagens de vogais e consoantes consideram as letras de A a Z, sem tratamento específico para letras acentuadas.

O vetor tem 100 posições. A concatenação com `strcat` não verifica o espaço restante; por isso, entradas próximas do limite podem ultrapassar sua capacidade.

## Exercício 2 — Ordenação e busca binária

O [Exercicio_02.cpp](Exercicio_02.cpp) lê dez inteiros e mostra o vetor antes e depois da ordenação crescente. A ordenação troca elementos adjacentes e repete as passagens enquanto houver trocas, seguindo o algoritmo Bubble Sort.

Depois, o usuário informa o número procurado. A busca binária é feita no vetor já ordenado. Quando encontra o valor, o programa informa seu índice, contado a partir de zero.

Para compilar e executar em um terminal Linux com `g++`, partindo da raiz do repositório:

```bash
mkdir -p /tmp/estrutura-de-dados
g++ CONTEUDO_P2/Exercicio_02.cpp -o /tmp/estrutura-de-dados/busca
/tmp/estrutura-de-dados/busca
```

## Tabela de pontuação

O programa solicita o nome, a quantidade de gols e a pontuação de 12 times. Primeiro, mostra os dados na ordem de cadastro; depois, ordena os times pela pontuação em ordem decrescente e, em caso de empate, pela quantidade de gols, também em ordem decrescente.

| Arquivo | Responsabilidade |
|---|---|
| [main.cpp](Exercicio_tabelaPontuacao/main.cpp) | Define os vetores e chama as etapas de cadastro, ordenação, desempate e exibição |
| [bibliotecas.h](Exercicio_tabelaPontuacao/bibliotecas.h) | Inclui bibliotecas e define os limites dos vetores e dos nomes |
| [cadastroTimes.h](Exercicio_tabelaPontuacao/cadastroTimes.h) | Lê os dados e mostra a tabela inicial |
| [ordenacaoPlacar.h](Exercicio_tabelaPontuacao/ordenacaoPlacar.h) | Ordena os times pela pontuação |
| [tabelaOrdenada.h](Exercicio_tabelaPontuacao/tabelaOrdenada.h) | Mostra a classificação após a ordenação por pontos |
| [desempate.h](Exercicio_tabelaPontuacao/desempate.h) | Reordena por gols os times com a mesma pontuação |
| [tabelaPontuacaoFinal.h](Exercicio_tabelaPontuacao/tabelaPontuacaoFinal.h) | Mostra a classificação final |
| [inserir.txt](Exercicio_tabelaPontuacao/inserir.txt) | Fornece 12 registros de exemplo, com nome, gols e pontos em linhas separadas |

Cada nome ocupa um vetor de 50 posições, incluindo o caractere que encerra a string. As trocas de classificação mantêm nome, gols e pontos associados ao mesmo time. Não há um terceiro critério de desempate quando pontos e gols são iguais.

### Compilar e usar a entrada de exemplo

Execute os comandos na raiz do repositório:

```bash
mkdir -p /tmp/estrutura-de-dados
g++ CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o /tmp/estrutura-de-dados/times
/tmp/estrutura-de-dados/times < CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt
```

O programa lê a entrada padrão; o redirecionamento `<` fornece o conteúdo de `inserir.txt`. Para digitar os dados, execute o binário sem o redirecionamento.

O cabeçalho de cadastro chama `system("pause")` e `system("cls")`. Esses comandos são próprios do terminal do Windows e podem gerar mensagens de comando não encontrado no Linux.
