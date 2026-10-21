# Executável compilado · Classificação de times

[← Tabela de pontuação](../README.md) · [← Conteúdo P2](../../README.md) · [↑ Índice](../../../README.md)

## 🎮 Inventário técnico · Classificação

> **Objetivo:** Acompanhe a relação entre `main.exe`, os cabeçalhos e a entrada de exemplo. XP são **marcos simbólicos** de aprendizagem e não são calculados pela aplicação.

| Etapa | O que verificar | Evidência | XP |
|---|---|---|--:|
| Inspecionar | Identificar o artefato compilado | [main.exe](main.exe) | 10 |
| Rastrear | Abrir o ponto de entrada e os dados | [`main.cpp`](../main.cpp) · [`inserir.txt`](../inserir.txt) | 15 |

**Seu checklist**

- [ ] Consultei o README do projeto com os critérios de ranking.
- [ ] Consigo recompilar o fonte localmente.

<details>
<summary><strong>🏅 Desafio bônus</strong></summary>

Missão opcional: anotar o sistema operacional usado na compilação e quaisquer avisos do compilador.

</details>

**Nota técnica:** Binário existente não significa que os requisitos foram testados automaticamente.

---


Esta pasta contém um artefato de execução Windows do projeto de **classificação de 12 times por pontos e gols**.

| Item | Descrição |
|---|---|
| [main.exe](main.exe) | Executável Windows incluído |
| [../main.cpp](../main.cpp) | Código-fonte principal |
| [../inserir.txt](../inserir.txt) | Dados para teste |
| [../README.md](../README.md) | Regras, fluxo, arquivos e limitações |

## Recompilar a partir da fonte

Na raiz do repositório, com `g++`:

```bash
g++ CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o times
./times < CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt
```

Os comandos `pause` e `cls` do código foram escritos para o terminal Windows. É recomendável recompilar localmente em vez de executar binários sem verificar sua procedência.
