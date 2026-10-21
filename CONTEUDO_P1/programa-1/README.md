# 🧮 Programa 1 — Cálculos com funções

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md)

## 📌 Sobre o exercício

Este programa recebe **três números inteiros** e realiza cálculos em sequência. Cada função utiliza o resultado da etapa anterior, demonstrando como organizar operações e trabalhar com parâmetros e valores de retorno.

O código está integralmente em [`programa-1.cpp`](programa-1.cpp), incluindo a função `main` e os protótipos das funções auxiliares.

## 🔢 Sequência de cálculos

| Etapa | Função | Operação |
|---|---|---|
| 1 | `soma(n1, n2)` | Soma os dois primeiros números e acrescenta 10. |
| 2 | `multiplicacao(n3, resultado)` | Soma o terceiro número ao resultado anterior e multiplica por 3. |
| 3 | `cubo(resultado)` | Eleva o resultado da segunda etapa ao cubo. |

Para as entradas `1`, `2` e `3`, os valores apresentados são:

```text
Resultado 1: 13
Resultado 2: 48
Resultado 3: 110592
```

## ⚙️ Compilação e execução

Com o compilador `g++` instalado, execute na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-1/programa-1.cpp -o programa-1
./programa-1
```

No Windows, o executável gerado pode ter a extensão `.exe`. O programa usa `scanf` e `printf`, embora o arquivo tenha extensão `.cpp`.

## ⚠️ Limitações

A entrada não possui validação específica, e as operações com `int` podem ultrapassar os limites do tipo em valores muito grandes. Os resultados acima são exemplos deduzidos das operações do [código-fonte](programa-1.cpp), não testes automatizados.
