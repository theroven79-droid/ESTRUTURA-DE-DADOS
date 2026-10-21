# Artefato compilado · Programa 3

[← Programa 3](../README.md) · [← Conteúdo P1](../../README.md) · [↑ Índice geral](../../../README.md)

## 🎮 Inventário · Artefatos de compilação

> **Objetivo:** Localize o binário e a origem de seu código sem confundir um executável com o arquivo-fonte. XP são **pontos simbólicos de estudo**, não coletados pelo programa.

| Fase | Experimento | Fonte / evidência | XP |
|---|---|---|--:|
| Identificar | Distinguir fonte e binário | [`programa-3.exe`](programa-3.exe) | 10 |
| Rastrear | Abrir o arquivo que contém a implementação | [`../programa-3.cpp`](../programa-3.cpp) | 10 |

**Checkpoints de conclusão**

- [ ] Localizei o arquivo .cpp correspondente.
- [ ] Li o guia do programa antes da execução.

<details>
<summary><strong>✨ Desbloquear desafio extra</strong></summary>

Desafio opcional: recompilar localmente e comparar a data e o tamanho do novo artefato, sem presumir igualdade bit a bit.

</details>

**Fidelidade ao código:** A existência de um binário não equivale a uma verificação de segurança ou resultado de testes.

---


Esta pasta reúne uma versão executável Windows do exercício de **controle de estoque**. Não contém o código-fonte principal.

| Item | Descrição |
|---|---|
| [programa-3.exe](programa-3.exe) | Binário Windows presente nesta pasta. |
| [../programa-3.cpp](../programa-3.cpp) | Código-fonte do exercício. |
| [../README.md](../README.md) | Requisitos, funções, estrutura e instruções de compilação. |

## Recompilar a partir do código

Na raiz do repositório e com `g++` disponível:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o estoque
```

Prefira compilar localmente a executar binários de origem não verificada. O código trabalha com até três produtos em memória, sem persistência de dados.
