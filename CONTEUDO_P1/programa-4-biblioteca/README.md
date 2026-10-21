# Programa 4 · Funções e variáveis em cabeçalhos

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white)

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## O que este exercício ensina

Exemplo de programa com **arquivos de cabeçalho**: o arquivo principal recebe dois inteiros, imprime seus valores e exibe o resultado da função `soma(10, 10)`.

| Arquivo | Responsabilidade |
|---|---|
| [programa.cpp](programa.cpp) | Função `main`, entrada e saída pelo terminal |
| [variaveis.h](variaveis.h) | Variáveis usadas pelo programa |
| [funcoes.h](funcoes.h) | Funções `soma` e `Limparbuffer` |
| [programa.exe](programa.exe) | Executável Windows já incluído |

## Fluxo de execução

```text
Ler código → Ler valor → Mostrar ambos → Calcular soma(10, 10) → Exibir 20
```

## Compilar e executar

Na raiz do repositório, com `g++`:

```bash
g++ CONTEUDO_P1/programa-4-biblioteca/programa.cpp -o programa4
./programa4
```

No Windows, execute `programa4.exe` após compilar.

> **Detalhe do código:** o resultado da soma é fixo (`20`) porque os argumentos são constantes. Os números informados pelo usuário são exibidos, mas não entram nessa operação. Consulte [programa.cpp](programa.cpp).
