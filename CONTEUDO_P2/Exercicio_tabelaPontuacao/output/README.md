# ⚽ Executável da classificação de times

[← Documentação do exercício](../README.md) · [← Índice do conteúdo](../../README.md) · [↑ Página inicial](../../../README.md)

## 📌 Sobre esta pasta

O binário desta pasta pertence ao exercício de classificação de 12 times, que ordena os registros por pontuação e utiliza a quantidade de gols como critério de desempate.

| Arquivo | Finalidade |
|---|---|
| [`main.exe`](main.exe) | Executável Windows já existente. |
| [`../main.cpp`](../main.cpp) | Código-fonte usado como referência. |
| [`../README.md`](../README.md) | Instruções, recursos e limitações do exercício. |

## ⚙️ Como recompilar

Com `g++` instalado, execute na **raiz do repositório**:

```bash
g++ CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp -o classificacao
```

No Linux/macOS, execute `./classificacao`. No Windows, utilize o executável `.exe` gerado pelo compilador.

## ⚠️ Observações

O código utiliza `pause` e `cls`, comandos específicos do Windows, e não define um terceiro critério de desempate.

O binário incluído não substitui o código-fonte e não comprova, por si só, compatibilidade ou segurança. Para estudar o funcionamento, consulte o [guia do programa](../README.md).
