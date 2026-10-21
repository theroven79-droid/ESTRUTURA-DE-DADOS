# 📦 Executável do cadastro de produtos

[← Documentação do exercício](../README.md) · [← Índice do conteúdo](../../README.md) · [↑ Página inicial](../../../README.md)

## 📌 Sobre esta pasta

O arquivo executável desta pasta corresponde ao exercício de cadastro e controle de estoque de até três produtos. A implementação e o menu estão no arquivo-fonte da pasta superior.

| Arquivo | Finalidade |
|---|---|
| [`programa-3.exe`](programa-3.exe) | Executável Windows já existente. |
| [`../programa-3.cpp`](../programa-3.cpp) | Código-fonte usado como referência. |
| [`../README.md`](../README.md) | Instruções, recursos e limitações do exercício. |

## ⚙️ Como recompilar

Com `g++` instalado, execute na **raiz do repositório**:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o estoque
```

No Linux/macOS, execute `./estoque`. No Windows, utilize o executável `.exe` gerado pelo compilador.

## ⚠️ Observações

Os produtos são mantidos apenas em memória; o programa permite cadastro, consulta e simulação de compra.

O binário incluído não substitui o código-fonte e não comprova, por si só, compatibilidade ou segurança. Para estudar o funcionamento, consulte o [guia do programa](../README.md).
