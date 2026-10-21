# Programa 4 · Funções e variáveis em cabeçalhos

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white)

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 🎮 Desafio · Desvendando headers

> **Objetivo:** Prove que você entende a separação de funções e variáveis e a diferença entre entrada e parâmetros fixos. XP são **pontos simbólicos de estudo**, não coletados pelo programa.

| Fase | Experimento | Fonte / evidência | XP |
|---|---|---|--:|
| Ler | Identificar os dois `#include` próprios | [`programa.cpp`](programa.cpp) | 10 |
| Executar | Informar valores e observar a soma | [`funcoes.h`](funcoes.h) | 20 |
| Explicar | Justificar por que o resultado é sempre 20 | [`soma(10, 10)`](programa.cpp) | 20 |

**Checkpoints de conclusão**

- [ ] Sei onde estão as declarações de variáveis.
- [ ] Reconheci que a função soma ignora os números digitados.
- [ ] Compilei o arquivo principal separadamente.

<details>
<summary><strong>✨ Desbloquear desafio extra</strong></summary>

Missão de evolução (não implementada): alterar uma cópia para somar os valores digitados.

</details>

**Fidelidade ao código:** A soma dos números inseridos pelo usuário não faz parte do comportamento atual.

---


## O que este exercício ensina

Exemplo de programa com **arquivos de cabeçalho**: o arquivo principal recebe dois inteiros, imprime seus valores e exibe o resultado da função `soma(10, 10)`.

| Arquivo | Responsabilidade |
|---|---|
| [programa.cpp](programa.cpp) | Função `main`, entrada e saída pelo terminal |
| [variaveis.h](variaveis.h) | Variáveis usadas pelo programa |
| [funcoes.h](funcoes.h) | Funções `soma` e `Limparbuffer` |
| [programa.exe](programa.exe) | Executável Windows já incluído |

## Fluxo de execução

```text
Ler código → Ler valor → Mostrar ambos → Calcular soma(10, 10) → Exibir 20
```

## Compilar e executar

Na raiz do repositório, com `g++`:

```bash
g++ CONTEUDO_P1/programa-4-biblioteca/programa.cpp -o programa4
./programa4
```

No Windows, execute `programa4.exe` após compilar.

> **Detalhe do código:** o resultado da soma é fixo (`20`) porque os argumentos são constantes. Os números informados pelo usuário são exibidos, mas não entram nessa operação. Consulte [programa.cpp](programa.cpp).
