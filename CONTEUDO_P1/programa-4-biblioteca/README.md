# 🛠️ Programa 4 — Relatório da organização em cabeçalhos

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md)

## 📌 Visão geral

O exercício mostra como utilizar **arquivos de cabeçalho para compartilhar variáveis e funções** com um programa principal. Seu funcionamento consiste em receber dois valores inteiros, exibi-los e apresentar o resultado de uma soma com argumentos definidos no código.

## 📂 Arquivos da pasta

| Arquivo | Conteúdo |
|---|---|
| [`programa.cpp`](programa.cpp) | Contém a função `main`, a leitura dos valores e a saída no terminal. |
| [`variaveis.h`](variaveis.h) | Define as variáveis inteiras `codigo` e `valor`. |
| [`funcoes.h`](funcoes.h) | Implementa a função `soma` e a rotina `Limparbuffer`. |
| [`programa.exe`](programa.exe) | Executável para Windows presente no diretório. |

## 🔎 Análise do funcionamento

O programa solicita um código e um valor inteiro, guarda as entradas nas variáveis do cabeçalho e mostra os dados informados. Depois, chama `soma(10, 10)` e apresenta **20**.

Esse resultado **não depende dos números digitados**, pois a função recebe dois argumentos fixos. A rotina `Limparbuffer` está definida em `funcoes.h`, mas não é chamada pelo fluxo principal apresentado.

## 📝 Considerações

O foco da atividade é a organização inicial do código, não a implementação de uma calculadora completa. A pasta não contém arquivos para salvar os valores informados. As responsabilidades podem ser conferidas diretamente nos [arquivos-fonte](programa.cpp).
