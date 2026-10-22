# 🔁 Relatório da pasta — Programa 2

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Resumo

O programa utiliza **funções e laços de repetição aninhados** para apresentar tabuadas. Um menu permite escolher entre os resultados das multiplicações ou o cubo de cada produto.

## 📂 Inventário

| Arquivo | Situação e finalidade |
|---|---|
| [`programa-01.cpp`](programa-01.cpp) | Implementa a função principal, o menu e as duas rotinas de tabuadas. |
| [`programa-02.cpp`](programa-02.cpp) | Arquivo vazio, sem implementação. |
| [`programa-01.exe`](programa-01.exe) | Executável Windows incluído na pasta. |

## 🧠 Análise do algoritmo

A função `FUNCAO_OPCAO` apresenta duas escolhas. A opção **1** chama `TABUADA_COMPLETA`, que calcula multiplicações de 1 a 10. A opção **2** chama `TABUADA_AO_CUBO`, que eleva o resultado de cada multiplicação à terceira potência. Valores diferentes dessas opções geram uma mensagem de escolha inválida.

Os dois procedimentos utilizam um laço para percorrer as tabuadas e outro para calcular seus elementos.

## ⚠️ Observações

O número mostrado no cabeçalho de cada tabuada começa em **0**, enquanto o cálculo usa o índice acrescido de 1. Assim, o título pode não corresponder ao número efetivamente multiplicado. O menu é apresentado apenas uma vez, sem repetição automática.

**Fonte da análise:** [`programa-01.cpp`](programa-01.cpp).
