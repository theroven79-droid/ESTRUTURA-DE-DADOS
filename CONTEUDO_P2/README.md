# 🔎 Conteúdo P2 — Strings, ordenação e busca

[← Página inicial](../README.md) · [← Conteúdo P1](../CONTEUDO_P1/README.md)

## 📌 Visão geral

Os exercícios da segunda etapa trabalham com **manipulação de textos, ordenação de números, busca binária e classificação de times**. Todos os programas são executados no terminal e podem ser estudados individualmente.

## 📂 Exercícios disponíveis

| Exercício | Conteúdo | Código ou guia |
|---|---|---|
| 01 — Manipulação de texto | Leitura e transformação de caracteres. | [`Exercicio_01.cpp`](Exercicio_01.cpp) |
| 02 — Ordenação e busca | Bubble Sort seguido de busca binária em dez inteiros. | [`Exercicio_02.cpp`](Exercicio_02.cpp) |
| Tabela de classificação | Cadastro de 12 times e desempate por gols. | [README do projeto](Exercicio_tabelaPontuacao/README.md) |

## 📝 Exercício 01 — Manipulação de caracteres

O programa lê uma frase, converte letras para maiúsculas, realiza contagens, acrescenta ` CHUVANAO`, substitui determinados caracteres e modifica seus códigos numéricos.

**Atenção:** a rotina `qtdPalavasTotal` mostra uma mensagem sobre quantidade de palavras, mas sua implementação contabiliza caracteres. Além disso, o vetor possui 100 posições, e a concatenação com `strcat` não verifica o espaço restante. Evite entradas longas ao estudar a versão atual.

## 🔢 Exercício 02 — Ordenação e busca binária

O usuário informa dez números inteiros. O programa apresenta a sequência digitada, organiza os valores em ordem crescente por **Bubble Sort** e realiza uma busca binária no vetor ordenado. Quando encontra o número, informa um índice iniciado em zero.

Para compilar e executar na raiz do repositório:

```bash
g++ CONTEUDO_P2/Exercicio_02.cpp -o busca
./busca
```

## ⚽ Classificação de times

O terceiro exercício coleta **nome, gols e pontuação** de 12 equipes. A classificação considera primeiro a maior pontuação e, em caso de empate, o maior número de gols.

O código está organizado em arquivos `.h`, descritos no [README da tabela de times](Exercicio_tabelaPontuacao/README.md). Para testar com os registros existentes:

```bash
g++ CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o classificacao
./classificacao < CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt
```

## ⚠️ Observações técnicas

- Não há terceiro critério implementado para times empatados em pontos e gols.
- A tabela utiliza comandos de terminal específicos do Windows (`pause` e `cls`).
- Os resultados apresentados dependem das entradas fornecidas; não existe suíte de testes automatizados declarada para os exercícios.

[Voltar à página inicial](../README.md)
