# Programa 2 · Tabuadas e potenciação

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white) ![Tema](https://img.shields.io/badge/Tema-La%C3%A7os%20e%20fun%C3%A7%C3%B5es-blue)

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md)

## 🎮 Checkpoint 02 · Laços aninhados

> **Missão:** Investigue a diferença entre o índice apresentado nos títulos e a conta efetivamente executada. **XP = metas simbólicas de aprendizagem**, sem registro automático.

| Etapa | Desafio verificável | Evidência original | XP |
|---|---|---|--:|
| 1 · Menu | Selecionar opções 1 e 2 | [`FUNCAO_OPCAO`](programa-01.cpp) | 10 |
| 2 · Repetição | Analisar os dois `for` internos | [Tabuadas](programa-01.cpp) | 20 |
| 3 · Diagnóstico | Explicar por que o cabeçalho pode mostrar 0 | [Código-fonte](programa-01.cpp) | 20 |

**Checklist de progresso**

- [ ] Reconheci o papel de `i` e `j`.
- [ ] Diferenciei a tabuada comum do cubo dos produtos.
- [ ] Confirmei que `programa-02.cpp` está vazio.

<details>
<summary><strong>🏆 Abrir desafio de evolução</strong></summary>

Missão extra (proposta): corrigir a apresentação do cabeçalho numa cópia local mantendo a multiplicação correta.

**Critério de conclusão:** explique o que mudou, vincule o arquivo afetado e demonstre o comportamento com entradas de teste.

</details>

**Nota de rigor:** A opção de menu é escolhida uma vez; não há laço que reapresente o menu automaticamente.

---


## Objetivo

Aplicar **menus, condições, funções e laços `for` aninhados** para produzir tabuadas de 1 a 10. A entrada `1` seleciona a tabuada tradicional; `2` seleciona o cubo de cada produto.

| Opção | Rotina no código | Resultado |
|---|---|---|
| `1` | `TABUADA_COMPLETA()` | Multiplicações de 1 a 10. |
| `2` | `TABUADA_AO_CUBO()` | Cubo de cada produto da tabuada. |
| Outras | `FUNCAO_OPCAO()` | Mensagem de opção inválida. |

## Como executar

Na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-2/programa-01.cpp -o tabuada
./tabuada
```

No Windows, use `tabuada.exe`. O exercício foi escrito com funções e comandos de entrada/saída da linguagem C em arquivo de extensão `.cpp`.

## Arquivos

| Caminho | Situação |
|---|---|
| [programa-01.cpp](programa-01.cpp) | Código funcional do menu e das duas rotinas. |
| [programa-02.cpp](programa-02.cpp) | Arquivo vazio, sem implementação. |
| [programa-01.exe](programa-01.exe) | Executável Windows existente no repositório. |

## Observações da implementação

O menu é executado uma única vez; não há repetição automática após uma escolha. Os textos de cabeçalho usam o índice do laço (`i`), que começa em zero, enquanto as multiplicações usam `i + 1`. Confira o código para diferenciar os rótulos dos cálculos exibidos.
