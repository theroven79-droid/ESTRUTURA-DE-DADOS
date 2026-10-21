# 🚌 Programa 6 — Controle de poltronas de ônibus

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md)

## 📌 Sobre o projeto

Simulação acadêmica de cadastro de ônibus e venda de passagens, desenvolvida para praticar o uso de **matrizes e funções**. O programa apresenta um mapa de poltronas, registra seleções e calcula informações de ocupação e venda.

O arquivo [`mainBus.cpp`](mainBus.cpp) define a matriz e inicia o menu. As rotinas de funcionamento estão concentradas em [`funcoes.h`](funcoes.h).

## 💺 Representação dos assentos

A matriz possui capacidade de **100 linhas por 4 colunas**. Os valores utilizados pelo programa indicam:

| Valor | Significado |
|---:|---|
| `0` | Poltrona comum disponível |
| `1` | Poltrona especial disponível |
| `8` | Poltrona registrada como comprada |
| `-1` | Posição sem poltrona cadastrada |

## ✨ Operações descritas no código

| Recurso | Finalidade |
|---|---|
| Cadastro | Definir características do ônibus e dos assentos. |
| Visualização | Consultar a representação das poltronas. |
| Compra | Selecionar poltronas para a simulação de venda. |
| Relatório | Apresentar ocupação, lugares disponíveis e valores registrados. |

## ⚙️ Compilação e execução

Na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-6-biblioteca/mainBus.cpp -o onibus
./onibus
```

Tenha `g++` instalado. No Windows, execute o binário `.exe` gerado. A pasta [`output/`](output/README.md) também contém um executável incluído anteriormente.

## ⚠️ Limitações da implementação

- A seleção de poltronas **não impede completamente** a escolha de assentos já ocupados ou de posições com valor `-1`.
- O menu apresenta a opção `0 - Sair`, mas não há tratamento correspondente para encerrar o laço. Use `Ctrl+C` caso precise interromper a execução.
- O programa é uma atividade de estudo, não um sistema pronto para venda real de passagens.

Para compreender essas limitações, consulte as rotinas em [`funcoes.h`](funcoes.h).
