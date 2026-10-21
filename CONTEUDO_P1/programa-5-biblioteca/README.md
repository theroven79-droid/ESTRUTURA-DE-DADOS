# 🧮 Programa 5 — Operações aritméticas com cabeçalhos

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md)

## 📌 Sobre o exercício

Aplicação simples de terminal que recebe **dois números inteiros** e apresenta cinco operações. O programa utiliza arquivos `.h` para organizar as funções aritméticas, demonstrando uma forma introdutória de modularização.

## ✨ Operações implementadas

| Operação | Expressão | Código |
|---|---|---|
| Soma | `a + b` | [`soma.h`](soma.h) |
| Subtração | `a - b` | [`subtracao.h`](subtracao.h) |
| Multiplicação | `a * b` | [`multiplicacao.h`](multiplicacao.h) |
| Divisão | `a / b` | [`divisao.h`](divisao.h) |
| Cubo | `(a + b)³` | [`cubo.h`](cubo.h) |

O arquivo [`main.cpp`](main.cpp) solicita os valores e exibe os resultados. O arquivo [`bibliotecas.h`](bibliotecas.h) reúne as inclusões dos cabeçalhos utilizados.

## ⚙️ Compilação e execução

Com `g++` disponível, execute na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-5-biblioteca/main.cpp -o calculadora
./calculadora
```

A divisão é exibida com duas casas decimais, conforme a formatação definida no programa.

## ⚠️ Atenção à divisão

A função [`divisao.h`](divisao.h) **não verifica se o divisor é zero**. Ao utilizar esta versão, informe um segundo número diferente de zero. Tratar essa condição seria uma melhoria do código, não uma funcionalidade existente.
