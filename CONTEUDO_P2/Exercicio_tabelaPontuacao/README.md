# Classificação de times · Pontuação e critérios de desempate

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white) ![Tema](https://img.shields.io/badge/Tema-Ordena%C3%A7%C3%A3o-blue)

[← Conteúdo P2](../README.md) · [↑ Índice geral](../../README.md) · [Dados de teste](inserir.txt)

## 🎮 Missão · Liga de algoritmos

> **Objetivo:** Confronte as regras de classificação com registros de teste, sem confundir ordem de entrada e ranking final. XP são **marcos simbólicos** de aprendizagem e não são calculados pela aplicação.

| Etapa | O que verificar | Evidência | XP |
|---|---|---|--:|
| 01 · Cadastro | Ler nomes, gols e pontos dos 12 times | [`cadastroTimes.h`](cadastroTimes.h) | 15 |
| 02 · Ordenação | Classificar por pontuação decrescente | [`ordenacaoPlacar.h`](ordenacaoPlacar.h) | 20 |
| 03 · Desempate | Conferir a ordem dos gols em empate de pontos | [`desempate.h`](desempate.h) | 25 |
| 04 · Resultado | Inspecionar a exibição final | [`tabelaPontuacaoFinal.h`](tabelaPontuacaoFinal.h) | 20 |

**Seu checklist**

- [ ] Conferi o formato de entrada em `inserir.txt`.
- [ ] Consigo explicar como nome, gols e pontos permanecem associados nas trocas.
- [ ] Sei que não existe terceiro critério de desempate.

<details>
<summary><strong>🏅 Desafio bônus</strong></summary>

Proposta: criar um conjunto de teste com dois times de pontuação idêntica e gols diferentes; registrar a ordem observada.

</details>

**Nota técnica:** Os comandos `pause` e `cls` são próprios do Windows; não são portáveis de forma direta.

---


## Objetivo

Programa acadêmico que **cadastra 12 times**, registra gols e pontos, exibe os dados de entrada e gera uma classificação em ordem decrescente. A ordenação considera **pontuação primeiro** e **gols como desempate**.

## Regras aplicadas

| Prioridade | Critério | Ordenação |
|---:|---|---|
| 1 | Pontuação | Maior para menor |
| 2 | Quantidade de gols, quando a pontuação empata | Maior para menor |
| — | Pontuação e gols iguais | Não há um terceiro critério |

```mermaid
flowchart LR
    A["Cadastrar 12 times"] --> B["Tabela inicial"]
    B --> C["Ordenar por pontos"]
    C --> D["Resolver empates por gols"]
    D --> E["Tabela final"]
```

## Arquitetura por arquivos

| Arquivo | Responsabilidade |
|---|---|
| [main.cpp](main.cpp) | Declara vetores e executa o fluxo. |
| [bibliotecas.h](bibliotecas.h) | Bibliotecas, tamanhos e constantes. |
| [cadastroTimes.h](cadastroTimes.h) | Leitura de nomes, gols e pontos. |
| [ordenacaoPlacar.h](ordenacaoPlacar.h) | Classificação por pontos. |
| [tabelaOrdenada.h](tabelaOrdenada.h) | Exibição intermediária. |
| [desempate.h](desempate.h) | Reordenação por gols entre times empatados. |
| [tabelaPontuacaoFinal.h](tabelaPontuacaoFinal.h) | Exibição da classificação final. |
| [inserir.txt](inserir.txt) | Entrada de exemplo para os 12 times. |
| [output/](output/README.md) | Binário compilado existente. |

Os nomes são mantidos em vetores de 50 posições (incluindo o terminador `\0`).

## Compilar e testar

A partir da raiz do repositório:

```bash
g++ CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o tabela-times
./tabela-times < CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt
```

Remova o redirecionamento `< .../inserir.txt` para digitar os registros manualmente.

## Compatibilidade e limites

O cabeçalho de cadastro chama `system("pause")` e `system("cls")`, comandos de **Windows**. Em Linux, esses comandos podem falhar, embora a lógica de classificação continue sendo estudável. Não há validação avançada dos valores nem terceiro critério de desempate. Todos os dados são mantidos em memória durante a execução.
