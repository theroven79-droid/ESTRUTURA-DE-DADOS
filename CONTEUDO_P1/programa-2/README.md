# 🔁 Programa 2 — Tabuadas com laços de repetição

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md)

## 📌 Sobre o exercício

O programa apresenta um menu com duas opções. Ambas percorrem as tabuadas de 1 a 10 utilizando laços `for` aninhados. A diferença está no valor exibido em cada multiplicação.

| Opção | Função | Comportamento |
|---|---|---|
| `1` | `TABUADA_COMPLETA` | Exibe o produto das multiplicações. |
| `2` | `TABUADA_AO_CUBO` | Exibe o cubo de cada produto. |
| Outro valor | `FUNCAO_OPCAO` | Informa que a opção não é aceita. |

O menu é apresentado **uma única vez**: depois da opção escolhida, o programa termina.

## 📂 Arquivos

| Arquivo | Descrição |
|---|---|
| [`programa-01.cpp`](programa-01.cpp) | Implementação do menu, das tabuadas e da função `main`. |
| [`programa-02.cpp`](programa-02.cpp) | Arquivo vazio, sem um segundo programa implementado. |
| [`programa-01.exe`](programa-01.exe) | Executável Windows existente no repositório. |

## ⚙️ Compilação e execução

Na raiz do repositório, com `g++` instalado:

```bash
g++ CONTEUDO_P1/programa-2/programa-01.cpp -o tabuada
./tabuada
```

Em sistemas Windows, execute o arquivo `.exe` gerado.

## ⚠️ Observação sobre a saída

O título de cada tabuada utiliza o índice `i`, que começa em zero. Entretanto, as multiplicações utilizam `i + 1`. Por isso, **o número apresentado no cabeçalho pode não corresponder à tabuada calculada**. Essa diferença está no código original e não foi corrigida nesta documentação.
