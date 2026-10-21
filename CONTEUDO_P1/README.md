# Conteúdo P1 — Funções, vetores e matrizes

[Voltar ao índice do repositório](../README.md)

Esta pasta reúne exercícios de funções aritméticas, laços de repetição, cadastro de produtos, organização em cabeçalhos e representação de poltronas em uma matriz.

## Programas disponíveis

| Pasta | Arquivo principal | Conteúdo |
|---|---|---|
| `programa-1` | [programa-1.cpp](programa-1/programa-1.cpp) | Leitura de três inteiros e sequência de cálculos com soma, multiplicação e cubo |
| `programa-2` | [programa-01.cpp](programa-2/programa-01.cpp) | Menu de tabuadas de 1 a 10 e dos cubos dos produtos |
| `programa-3` | [programa-3.cpp](programa-3/programa-3.cpp) | Cadastro, consulta, compra e exibição de até três produtos |
| `programa-3-biblioteca` | [programa-3-com-biblioteca.cpp](programa-3-biblioteca/programa-3-com-biblioteca.cpp) | Versão do cadastro de produtos com as funções em um cabeçalho |
| `programa-4-biblioteca` | [programa.cpp](programa-4-biblioteca/programa.cpp) | Leitura de um código e de um valor, seguida da chamada da função `soma(10, 10)` |
| `programa-5-biblioteca` | [main.cpp](programa-5-biblioteca/main.cpp) | Operações aritméticas com funções distribuídas em cabeçalhos |
| `programa-6-biblioteca` | [mainBus.cpp](programa-6-biblioteca/mainBus.cpp) | Cadastro de ônibus, representação das poltronas, compra de passagem e relatório de ocupação |

O arquivo [programa-02.cpp](programa-2/programa-02.cpp), na pasta `programa-2`, está vazio.

## Cadastro de produtos

O [programa-3.cpp](programa-3/programa-3.cpp) mantém nome, código, valor e quantidade em vetores de três posições. O mesmo índice identifica um produto nesses vetores.

| Opção | Ação do menu |
|---:|---|
| 1 | Cadastrar produto |
| 2 | Consultar estoque pelo código |
| 3 | Comprar produtos e atualizar o estoque |
| 4 | Exibir a tabela de produtos |
| 5 | Encerrar |

A compra calcula subtotais e apresenta um resumo. Os dados ficam em memória e são descartados quando o programa termina.

Para compilar e executar em um terminal Linux com `g++`, partindo da raiz do repositório:

```bash
mkdir -p /tmp/estrutura-de-dados
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o /tmp/estrutura-de-dados/estoque
/tmp/estrutura-de-dados/estoque
```

A versão [programa-3-biblioteca](programa-3-biblioteca/programa-3-com-biblioteca.cpp) inclui o cabeçalho [funcoes.h](programa-3-biblioteca/funcoes.h). Nesse cabeçalho, funções são chamadas antes de suas declarações; essa versão apresenta erros de compilação com `g++`.

## Operações em cabeçalhos

Em [programa-5-biblioteca](programa-5-biblioteca/main.cpp), o usuário informa dois inteiros. As operações são:

| Função | Cálculo |
|---|---|
| [soma](programa-5-biblioteca/soma.h) | `a + b` |
| [subtracao](programa-5-biblioteca/subtracao.h) | `a - b` |
| [multiplicacao](programa-5-biblioteca/multiplicacao.h) | `a × b` |
| [divisao](programa-5-biblioteca/divisao.h) | `a ÷ b`, com resultado exibido com duas casas decimais |
| [cubo](programa-5-biblioteca/cubo.h) | `(a + b)³` |

A função de divisão não verifica se o divisor é zero.

```bash
mkdir -p /tmp/estrutura-de-dados
g++ CONTEUDO_P1/programa-5-biblioteca/main.cpp -o /tmp/estrutura-de-dados/operacoes
/tmp/estrutura-de-dados/operacoes
```

## Representação das poltronas

O [programa de ônibus](programa-6-biblioteca/mainBus.cpp) usa uma matriz de 100 linhas e quatro colunas, declarada com os limites definidos em [funcoes.h](programa-6-biblioteca/funcoes.h).

| Valor na matriz | Significado |
|---:|---|
| `0` | Poltrona comum disponível |
| `1` | Poltrona especial disponível |
| `8` | Poltrona marcada como comprada |
| `-1` | Posição que não corresponde a uma poltrona cadastrada |

Cadastre o ônibus antes de consultar as poltronas ou efetuar uma compra. O programa calcula a quantidade de lugares ocupados e disponíveis, o percentual de ocupação e o valor total vendido.

O código ainda permite selecionar uma poltrona já comprada ou uma posição marcada com `-1`. Além disso, a opção `0 - Sair` aparece no menu, mas não tem um caso que encerre o laço; use `Ctrl+C` para interromper a execução.

## Configuração do editor

A pasta [.vscode](.vscode/tasks.json) contém uma tarefa de compilação com um caminho específico do Windows/MSYS2. Confira se o compilador está instalado nesse caminho antes de usar a tarefa.

---

## Caminho de aprendizagem sugerido

```mermaid
flowchart LR
    A["Funções"] --> B["Laços"]
    B --> C["Vetores"]
    C --> D["Cabeçalhos .h"]
    D --> E["Matrizes"]
    E --> F["Projeto de poltronas"]
```

| Etapa | Projeto | Guia específico |
|---:|---|---|
| 1 | Cálculos com funções | [Programa 1](programa-1/README.md) |
| 2 | Tabuadas e laços | [Programa 2](programa-2/README.md) |
| 3 | Gestão de produtos | [Programa 3](programa-3/README.md) |
| 4 | Modularização do estoque | [Programa 3 com biblioteca](programa-3-biblioteca/README.md) |
| 5 | Funções e variáveis em headers | [Programa 4](programa-4-biblioteca/README.md) |
| 6 | Operações aritméticas modulares | [Programa 5](programa-5-biblioteca/README.md) |
| 7 | Matriz de assentos | [Programa 6](programa-6-biblioteca/README.md) |

## Dicas de compilação e leitura

- Compile **um `main` de cada vez**. Os arquivos possuem exercícios independentes, não formam uma aplicação única.
- O nome `.cpp` aparece mesmo onde são usadas funções da linguagem C (`stdio.h`, `printf`, `scanf`).
- Em versões com headers, consulte os `#include` no arquivo principal antes de estudar funções auxiliares.
- Os arquivos `.exe` são binários Windows; a leitura do código-fonte é o caminho mais seguro para compreender o funcionamento.
- A [P2](../CONTEUDO_P2/README.md) avança para strings, ordenação e busca.

> **Situação real dos exercícios:** a documentação registra limitações identificadas no código, inclusive problemas de compilação, divisão por zero e fluxo do menu de ônibus. Não representa uma validação automatizada de cada programa.
