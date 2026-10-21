# 🛠️ Programa 4 — Variáveis e funções em cabeçalhos

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md)

## 📌 Sobre o exercício

O objetivo é demonstrar a utilização de **arquivos `.h`** para organizar variáveis e funções em um programa de terminal. O usuário informa dois números inteiros, que são exibidos na tela; em seguida, o programa chama a função `soma`.

## 📂 Arquivos e responsabilidades

| Arquivo | Conteúdo |
|---|---|
| [`programa.cpp`](programa.cpp) | Função `main`, leitura dos dados e exibição dos resultados. |
| [`variaveis.h`](variaveis.h) | Variáveis utilizadas para armazenar código e valor. |
| [`funcoes.h`](funcoes.h) | Implementação de `soma` e `Limparbuffer`. |
| [`programa.exe`](programa.exe) | Executável Windows incluído no repositório. |

## 🔢 Como funciona

1. Solicita um código e um valor inteiro.
2. Exibe os dois valores informados.
3. Calcula `soma(10, 10)` e apresenta o resultado **20**.

**Importante:** os números digitados não são utilizados na soma. A chamada contém dois valores fixos, conforme o [código-fonte](programa.cpp).

## ⚙️ Compilação e execução

A partir da raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-4-biblioteca/programa.cpp -o programa4
./programa4
```

É necessário ter `g++` instalado. No Windows, execute o arquivo `.exe` gerado. O exercício não utiliza banco de dados nem armazenamento persistente.
