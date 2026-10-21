# 🛠️ Programa 4 — Variáveis e funções em arquivos .h

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

[variaveis.h](variaveis.h) contém variáveis utilizadas no programa; [funcoes.h](funcoes.h) define `soma` e `Limparbuffer`. O arquivo [programa.cpp](programa.cpp) possui a execução principal.

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| Entrada | Lê código e valor inteiros. |
| Exibição | Mostra ambos os números. |
| Função | Executa `soma(10, 10)` e imprime `20`. |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [programa.cpp](programa.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |

## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-4-biblioteca/programa.cpp -o programa
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./programa` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

A soma utiliza **constantes**, não os valores digitados. Trata-se de exercício de organização com cabeçalhos, sem persistência.

**Código para conferência:** [programa.cpp](programa.cpp).
