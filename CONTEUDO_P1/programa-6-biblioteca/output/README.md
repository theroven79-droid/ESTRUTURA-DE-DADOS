# Executável compilado · Sistema de ônibus

[← Guia do sistema](../README.md) · [← Conteúdo P1](../../README.md) · [↑ Índice](../../../README.md)

## 🎮 Checkpoint de rastreabilidade · Ônibus

> **Objetivo:** Navegue do executável para a implementação, distinguindo artefato e código-fonte. XP são **marcos simbólicos** de aprendizagem e não são calculados pela aplicação.

| Etapa | O que verificar | Evidência | XP |
|---|---|---|--:|
| Localizar | Identificar `mainBus.exe` | [Binário](mainBus.exe) | 10 |
| Rastrear | Abrir `mainBus.cpp` e `funcoes.h` | [Fonte](../mainBus.cpp) | 15 |

**Seu checklist**

- [ ] Consultei o README principal do exercício.
- [ ] Sei recompilar a partir do código em vez de depender do binário.

<details>
<summary><strong>🏅 Desafio bônus</strong></summary>

Opcional: registrar versão do compilador e ambiente usado em uma recompilação local.

</details>

**Nota técnica:** A pasta output não contém uma suíte de testes nem um indicador de qualidade do executável.

---


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
