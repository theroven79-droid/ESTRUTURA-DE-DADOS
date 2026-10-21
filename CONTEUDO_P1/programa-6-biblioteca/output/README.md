# 🚌 Executável do sistema de ônibus

[← Documentação do exercício](../README.md) · [← Índice do conteúdo](../../README.md) · [↑ Página inicial](../../../README.md)

## 📌 Sobre esta pasta

Esta pasta armazena um executável Windows da simulação de cadastro de ônibus e ocupação de poltronas. As funções utilizadas pelo programa estão definidas em `funcoes.h`, na pasta superior.

| Arquivo | Finalidade |
|---|---|
| [`mainBus.exe`](mainBus.exe) | Executável Windows já existente. |
| [`../mainBus.cpp`](../mainBus.cpp) | Código-fonte usado como referência. |
| [`../README.md`](../README.md) | Instruções, recursos e limitações do exercício. |

## ⚙️ Como recompilar

Com `g++` instalado, execute na **raiz do repositório**:

```bash
g++ CONTEUDO_P1/programa-6-biblioteca/mainBus.cpp -o onibus
```

No Linux/macOS, execute `./onibus`. No Windows, utilize o executável `.exe` gerado pelo compilador.

## ⚠️ Observações

O sistema não valida totalmente as seleções de poltronas, e a opção de saída do menu não está implementada.

O binário incluído não substitui o código-fonte e não comprova, por si só, compatibilidade ou segurança. Para estudar o funcionamento, consulte o [guia do programa](../README.md).
