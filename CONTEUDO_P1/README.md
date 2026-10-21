# Conteúdo P1 — Funções, vetores e matrizes

[Voltar ao repositório](../README.md)

Os programas desta pasta evoluem de operações aritméticas para exemplos de cadastro e consulta com vetores, organização em cabeçalhos e representação de assentos em matriz.

## Mapa dos programas

| Pasta / entrada | Comportamento implementado | Conceitos |
|---|---|---|
| [programa-1](programa-1/programa-1.cpp) | Lê três inteiros, calcula soma com acréscimo de 10, uma etapa de soma e multiplicação por 3, e o cubo do resultado | Protótipos, argumentos e retorno |
| [programa-2](programa-2/programa-01.cpp) | Menu para produtos de 1 a 10 ou cubo desses produtos | Laços aninhados e seleção |
| [programa-3](programa-3/programa-3.cpp) | Cadastro de até três produtos, consulta, compra e tabela de estoque | Vetores paralelos, strings, validação e ponteiros |
| [programa-3-biblioteca](programa-3-biblioteca/programa-3-com-biblioteca.cpp) | Versão do estoque separada em entrada principal e cabeçalho; possui erros de compilação | Organização em arquivos |
| [programa-4-biblioteca](programa-4-biblioteca/programa.cpp) | Lê código e valor, mostra os dois e calcula `soma(10, 10)` | Variáveis em cabeçalho e funções |
| [programa-5-biblioteca](programa-5-biblioteca/main.cpp) | Lê dois inteiros e apresenta soma, subtração, multiplicação, divisão e cubo da soma | Cabeçalhos por operação |
| [programa-6-biblioteca](programa-6-biblioteca/mainBus.cpp) | Cadastro de ônibus, visualização de assentos, compra de passagem e relatório de ocupação | Matriz, passagem por ponteiro e cálculos |

## Compilar e executar

Execute da raiz do repositório, escolhendo **um** arquivo principal:

```bash
mkdir -p /tmp/estrutura-de-dados
g++ -std=c++17 CONTEUDO_P1/programa-3/programa-3.cpp -o /tmp/estrutura-de-dados/estoque
/tmp/estrutura-de-dados/estoque
```

O menu do estoque oferece cadastro, consulta, compra, tabela e saída na opção 5. Nome, código, valor e quantidade compartilham o mesmo índice nos vetores. A compra reduz o estoque e acumula os subtotais da operação. Os dados não são persistidos ao encerrar.

Para experimentar os cabeçalhos aritméticos:

```bash
g++ -std=c++17 CONTEUDO_P1/programa-5-biblioteca/main.cpp -o /tmp/estrutura-de-dados/operacoes
/tmp/estrutura-de-dados/operacoes
```

Com `a = 2` e `b = 3`, os resultados são soma 5, subtração -1, multiplicação 6, divisão 0,67 e cubo 125. A função [cubo](programa-5-biblioteca/cubo.h) calcula `(a + b)³`. A [divisão](programa-5-biblioteca/divisao.h) não trata divisor zero.

## Como o ônibus representa os lugares

Em [funcoes.h](programa-6-biblioteca/funcoes.h), a matriz possui quatro colunas e capacidade declarada de 100 linhas. Os estados utilizados são:

| Valor | Significado no código |
|---|---|
| `0` | Lugar comum disponível |
| `1` | Lugar especial disponível |
| `8` | Lugar marcado como comprado |
| `-1` | Posição fora da quantidade de lugares cadastrada |

Cadastre o ônibus antes de visualizar ou comprar. A rotina de compra verifica fileira e coluna, mas não rejeita um assento já comprado nem uma posição marcada como `-1`. O valor mínimo de partida é coletado e exibido; não há uma decisão de partida implementada com esse valor. A opção 0 anunciada no menu não encerra o programa; nesse estado, interrompa pelo terminal com `Ctrl+C`.

## Pontos de atenção

- [programa-02.cpp](programa-2/programa-02.cpp) está vazio.
- [funcoes.h do programa-3-biblioteca](programa-3-biblioteca/funcoes.h) chama funções antes das declarações; essa versão não compila como está.
- Em [programa-01.cpp](programa-2/programa-01.cpp), os títulos das tabuadas usam `i` (0 a 9), enquanto os produtos usam `i + 1` (1 a 10).
- As configurações em [.vscode](.vscode/tasks.json) contêm caminhos Windows/MSYS2. O comando de terminal acima evita depender desses caminhos.
