# Programa 5 · Calculadora com funções em cabeçalhos

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white) ![Assunto](https://img.shields.io/badge/Assunto-Modulariza%C3%A7%C3%A3o-blue)

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 🎮 Desafio · Calculadora modular

> **Objetivo:** Acompanhe cinco operações distribuídas entre cabeçalhos e identifique um caso-limite importante. XP são **pontos simbólicos de estudo**, não coletados pelo programa.

| Fase | Experimento | Fonte / evidência | XP |
|---|---|---|--:|
| Mapear | Relacionar cada operação ao arquivo .h | [`bibliotecas.h`](bibliotecas.h) | 15 |
| Executar | Inserir dois inteiros e conferir os resultados | [`main.cpp`](main.cpp) | 15 |
| Auditar | Localizar a ausência de proteção para divisor zero | [`divisao.h`](divisao.h) | 20 |

**Checkpoints de conclusão**

- [ ] Identifiquei os cinco módulos aritméticos.
- [ ] Compreendi que cubo calcula `(a+b)^3`.
- [ ] Sei por que devo evitar divisor zero ao estudar a versão atual.

<details>
<summary><strong>✨ Desbloquear desafio extra</strong></summary>

Proposta de melhoria: tratar `b == 0` explicitamente antes da divisão e documentar a resposta esperada.

</details>

**Fidelidade ao código:** Não execute divisão por zero deliberadamente em código sem proteção para demonstrar resultado.

---


## Apresentação

Exercício de operações aritméticas com **dois inteiros** digitados no terminal. A função `main` chama cinco rotinas distribuídas em arquivos `.h` e exibe os resultados.

| Operação | Cabeçalho | Expressão |
|---|---|---|
| Soma | [soma.h](soma.h) | `a + b` |
| Subtração | [subtracao.h](subtracao.h) | `a - b` |
| Multiplicação | [multiplicacao.h](multiplicacao.h) | `a * b` |
| Divisão | [divisao.h](divisao.h) | `a / b` (exibida com duas casas decimais) |
| Cubo | [cubo.h](cubo.h) | `(a + b)^3` |

## Organização

```mermaid
flowchart TD
    M["main.cpp"] --> B["bibliotecas.h"]
    B --> S["soma.h"]
    B --> SB["subtracao.h"]
    B --> MT["multiplicacao.h"]
    B --> D["divisao.h"]
    B --> C["cubo.h"]
```

Consulte [main.cpp](main.cpp) e [bibliotecas.h](bibliotecas.h) para ver os `#include` usados.

## Como executar

Na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-5-biblioteca/main.cpp -o calculadora
./calculadora
```

## Limitações e estudo

A função de divisão **não trata divisor igual a zero**. Use um valor diferente de zero em `b`. O exercício ilustra modularização com cabeçalhos; para projetos maiores, é preferível separar declarações nos headers e definições em arquivos-fonte.
