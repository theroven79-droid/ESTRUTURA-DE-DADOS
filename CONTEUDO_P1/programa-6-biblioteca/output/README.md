# Executável compilado · Sistema de ônibus

[← Guia do sistema](../README.md) · [← Conteúdo P1](../../README.md) · [↑ Índice](../../../README.md)

Pasta destinada ao binário Windows do exercício de **mapa, venda e ocupação de poltronas**.

| Arquivo | Função |
|---|---|
| [mainBus.exe](mainBus.exe) | Executável incluído nesta pasta |
| [../mainBus.cpp](../mainBus.cpp) | Ponto de entrada original |
| [../funcoes.h](../funcoes.h) | Rotinas de menu, cadastro e assentos |
| [../README.md](../README.md) | Documentação completa e limitações |

## Recompilação segura

A partir da raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-6-biblioteca/mainBus.cpp -o onibus
```

Prefira compilar o código-fonte localmente. A implementação atual não valida completamente a seleção de poltronas e apresenta uma opção de saída sem tratamento no menu. Leia os detalhes no [README do programa](../README.md).
