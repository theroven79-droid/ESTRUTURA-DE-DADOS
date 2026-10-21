# Executável compilado · Classificação de times

[← Tabela de pontuação](../README.md) · [← Conteúdo P2](../../README.md) · [↑ Índice](../../../README.md)

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
