# Programa 3 com biblioteca · Estoque modularizado

![C](https://img.shields.io/badge/Linguagem-C%2FC%2B%2B-00599C) ![Situação](https://img.shields.io/badge/Compila%C3%A7%C3%A3o-Aten%C3%A7%C3%A3o-orange)

[← Conteúdo P1](../README.md) · [Versão sem cabeçalho](../programa-3/README.md) · [↑ Índice geral](../../README.md)

## Proposta

Variação do cadastro de produtos que separa as funções no arquivo de cabeçalho [`funcoes.h`](funcoes.h), enquanto [`programa-3-com-biblioteca.cpp`](programa-3-com-biblioteca.cpp) contém a função `main`. O foco é estudar a organização de código e a reutilização de rotinas.

| Arquivo | Responsabilidade |
|---|---|
| [programa-3-com-biblioteca.cpp](programa-3-com-biblioteca.cpp) | Inclui o cabeçalho, chama `Menu` e controla o laço principal. |
| [funcoes.h](funcoes.h) | Funções e variáveis utilizadas pelo cadastro, consulta e compra. |
| [programa-3-com-biblioteca.exe](programa-3-com-biblioteca.exe) | Executável Windows incluído no repositório. |

## Fluxo

```mermaid
flowchart LR
    A["main (.cpp)"] --> B["funcoes.h"]
    B --> C["Menu"]
    C --> D["Cadastro, consulta, compra e listagem"]
```

## Compilação e estado conhecido

Na raiz do repositório, o comando de estudo é:

```bash
g++ CONTEUDO_P1/programa-3-biblioteca/programa-3-com-biblioteca.cpp -o estoque-modular
```

**Atenção:** o código atual apresenta erros de compilação no `g++` porque algumas funções são utilizadas antes de serem declaradas em `funcoes.h`. O comando acima serve para reproduzir e investigar o problema, **não** representa uma compilação validada.

Uma melhoria futura seria adicionar protótipos antes das chamadas e separar declarações (`.h`) de implementações (`.cpp`). Esta documentação não altera o código-fonte.
