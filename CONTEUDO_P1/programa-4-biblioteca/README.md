# 🛠️ Relatório da pasta — Programa 4 com cabeçalhos

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Resumo

O exercício demonstra a utilização de **arquivos de cabeçalho** para organizar variáveis e funções. O programa solicita dois valores inteiros, exibe os números informados e realiza uma soma com argumentos fixos.

## 📂 Inventário dos arquivos

| Arquivo | Conteúdo |
|---|---|
| [`programa.cpp`](programa.cpp) | Contém a função `main`, a entrada dos valores e a apresentação dos resultados. |
| [`variaveis.h`](variaveis.h) | Define as variáveis inteiras `codigo` e `valor`. |
| [`funcoes.h`](funcoes.h) | Contém a função `soma` e a rotina `Limparbuffer`. |
| [`programa.exe`](programa.exe) | Executável Windows incluído no diretório. |

## 🧠 Funcionamento observado

O usuário digita um código e um valor, que são armazenados nas variáveis definidas no cabeçalho. Em seguida, o programa apresenta ambos e chama `soma(10, 10)`.

**O resultado da soma é sempre 20**: os dois argumentos estão fixos no código e não dependem dos valores digitados. Essa característica distingue o exercício de uma calculadora que opera sobre as entradas do usuário.

## 🔎 Considerações

O material exemplifica organização inicial de código em arquivos `.h`, mas não possui persistência de dados. As funções e declarações podem ser conferidas em [`programa.cpp`](programa.cpp), [`variaveis.h`](variaveis.h) e [`funcoes.h`](funcoes.h).
