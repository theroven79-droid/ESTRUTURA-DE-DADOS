# Programa 6 · Reserva e ocupação de poltronas de ônibus

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white) ![Tema](https://img.shields.io/badge/Tema-Matrizes-blue)

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md) · [Código-fonte](mainBus.cpp)

## Visão geral

Simulação em terminal para cadastrar ônibus, representar assentos em uma **matriz de 100 linhas × 4 colunas**, vender passagens e consultar a ocupação. O arquivo `mainBus.cpp` cria a matriz e chama `menuPrincipal`, implementada em `funcoes.h`.

## Estrutura

| Arquivo | Utilização |
|---|---|
| [mainBus.cpp](mainBus.cpp) | Entrada da aplicação, variáveis e chamada ao menu. |
| [funcoes.h](funcoes.h) | Cadastro, visualização de poltronas, compra e relatório. |
| [mainBus.exe](mainBus.exe) | Executável Windows presente no projeto. |
| [output/](output/README.md) | Outro artefato compilado do exercício. |

## Legenda da matriz

| Valor | Significado |
|---:|---|
| `0` | Poltrona comum disponível |
| `1` | Poltrona especial disponível |
| `8` | Poltrona vendida |
| `-1` | Posição não cadastrada como assento |

```mermaid
flowchart TD
    A["Iniciar menu"] --> B["Cadastrar ônibus"]
    B --> C["Consultar mapa de poltronas"]
    C --> D["Comprar passagem"]
    D --> E["Consultar relatório de ocupação"]
```

## Compilar e executar

Na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-6-biblioteca/mainBus.cpp -o onibus
./onibus
```

## Atenção ao comportamento atual

- Cadastre o ônibus antes de consultar lugares ou comprar.
- A implementação permite selecionar assentos já comprados ou posições `-1`; a disponibilidade não é validada completamente.
- A opção `0 - Sair` aparece no menu, mas o código não possui o caso que encerra o laço; use `Ctrl+C` para interromper.

É um **protótipo acadêmico**, sem persistência ou regras completas de uma bilheteria real.
