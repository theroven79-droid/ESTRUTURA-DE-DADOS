# 🚌 Programa 6 — Mapa e ocupação de ônibus

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 📌 Objetivo

O [mainBus.cpp](mainBus.cpp) declara a matriz e chama `menuPrincipal`, implementada em [funcoes.h](funcoes.h). Estados: `0` comum disponível, `1` especial disponível, `8` comprado e `-1` posição não cadastrada.

## ✨ Operações e conceitos

| Etapa / elemento | Funcionamento |
|---|---|
| Cadastro | Define propriedades e mapa do ônibus. |
| Assentos | Representa posições em matriz de 100 linhas × 4 colunas. |
| Venda | Permite selecionar passagens. |
| Relatório | Apresenta ocupação, disponibilidade e valores vendidos. |

## 📂 Arquivos relevantes

| Arquivo | Descrição |
|---|---|
| [mainBus.cpp](mainBus.cpp) | Ponto de entrada e implementação principal. |
| Arquivos `.h` nesta pasta, quando existentes | Rotinas e declarações incluídas pelo programa. |
| [output/](output/README.md) | Diretório com binário para Windows. |


## ⚙️ Compilação

Na raiz do repositório, com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-6-biblioteca/mainBus.cpp -o mainBus
```

Se o compilador concluir sem erro, execute o arquivo resultante (`./mainBus` no Linux/macOS; `.exe` no Windows). Cada exercício possui um ponto de entrada próprio.

## ⚠️ Observações técnicas

**Limitações conhecidas:** o código pode aceitar seleção de assento já comprado ou posição `-1`. A opção `0 - Sair` é apresentada, mas não possui tratamento que encerre o laço; `Ctrl+C` pode ser necessário para interromper.

**Código para conferência:** [mainBus.cpp](mainBus.cpp).
