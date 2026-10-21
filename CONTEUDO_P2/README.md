# Conteúdo P2 — Strings, ordenação e busca

[Voltar ao repositório](../README.md)

## Exercícios

| Entrada | Fluxo implementado |
|---|---|
| [Exercicio_01.cpp](Exercicio_01.cpp) | Lê uma frase, converte para maiúsculas, conta caracteres, vogais e consoantes, concatena texto, substitui vogais e desloca códigos de caracteres. |
| [Exercicio_02.cpp](Exercicio_02.cpp) | Lê dez inteiros, mostra o vetor, ordena por Bubble Sort, informa as trocas e realiza busca binária. |
| [Exercicio_tabelaPontuacao/main.cpp](Exercicio_tabelaPontuacao/main.cpp) | Lê nome, gols e pontos de 12 times, ordena por pontos e aplica desempate por gols. |

## Executar ordenação e busca

A partir da raiz do repositório:

```bash
mkdir -p /tmp/estrutura-de-dados
g++ -std=c++17 CONTEUDO_P2/Exercicio_02.cpp -o /tmp/estrutura-de-dados/busca
/tmp/estrutura-de-dados/busca
```

Informe dez números e, depois, o número procurado. A busca ocorre **após** a ordenação crescente; a posição informada é o índice no vetor ordenado, começando em zero. A ordenação repete passagens enquanto há trocas de elementos adjacentes.

## Tabela de pontuação

| Arquivo | Responsabilidade |
|---|---|
| [bibliotecas.h](Exercicio_tabelaPontuacao/bibliotecas.h) | Bibliotecas e limites: 12 times, 12 posições de gols/pontos e 50 caracteres por nome. |
| [cadastroTimes.h](Exercicio_tabelaPontuacao/cadastroTimes.h) | Entrada dos dados e primeira tabela. |
| [ordenacaoPlacar.h](Exercicio_tabelaPontuacao/ordenacaoPlacar.h) | Ordenação decrescente por pontos. |
| [tabelaOrdenada.h](Exercicio_tabelaPontuacao/tabelaOrdenada.h) | Exibição após a primeira ordenação. |
| [desempate.h](Exercicio_tabelaPontuacao/desempate.h) | Entre pontuações iguais, prioriza mais gols. |
| [tabelaPontuacaoFinal.h](Exercicio_tabelaPontuacao/tabelaPontuacaoFinal.h) | Exibição da classificação final. |
| [inserir.txt](Exercicio_tabelaPontuacao/inserir.txt) | Exemplo com 12 registros, cada um em três linhas: nome, gols e pontos. |

As trocas movem nome, gols e pontos em conjunto. O código não acrescenta outro critério para igualdade simultânea de pontos e gols.

```bash
g++ -std=c++17 CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o /tmp/estrutura-de-dados/times
/tmp/estrutura-de-dados/times < CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt
```

O cadastro chama `pause` e `cls` via `system`. Em Linux, essas chamadas geram mensagens de comando não encontrado; a classificação continua. O programa lê a entrada padrão: o redirecionamento acima é o que fornece o arquivo de exemplo.

## Comportamento real do exercício de frase

Em [Exercicio_01.cpp](Exercicio_01.cpp), a sequência altera o mesmo vetor de caracteres:

1. Lê uma frase em um buffer de 100 posições e remove a quebra de linha.
2. Converte caracteres para maiúsculas e faz as contagens.
3. Acrescenta ` CHUVANAO`.
4. Substitui A/I por B e E/O/U por 3.
5. Soma 3 aos códigos dos cinco primeiros caracteres e 5 aos demais.

A rotina `qtdPalavasTotal`, apesar do rótulo “Quantidade de palavras”, incrementa uma vez por caractere. A concatenação usa `strcat` sem verificar o espaço restante; entradas próximas do limite podem ultrapassar o buffer. As contagens de vogais e consoantes comparam códigos de A a Z, sem tratamento específico para acentos. O deslocamento final é um exercício de transformação de caracteres, sem garantia de segurança criptográfica.
