# 🧩 Programa 3 — Versão com cabeçalho

[← Conteúdo P1](../README.md) · [↑ Página inicial](../../README.md) · [Comparar com a versão original](../programa-3/README.md)

## 📌 Objetivo do exercício

Esta variação reorganiza o programa de controle de estoque para estudar o uso de **arquivos de cabeçalho em C/C++**. O arquivo principal inclui `funcoes.h`, onde estão concentradas as funções e variáveis utilizadas nas operações do estoque.

## 📂 Organização

| Arquivo | Responsabilidade |
|---|---|
| [`programa-3-com-biblioteca.cpp`](programa-3-com-biblioteca.cpp) | Contém a função `main` e chama o menu principal. |
| [`funcoes.h`](funcoes.h) | Reúne as rotinas e os dados utilizados no cadastro, na consulta e na compra. |
| [`programa-3-com-biblioteca.exe`](programa-3-com-biblioteca.exe) | Binário Windows incluído no repositório. |

## ⚠️ Estado da compilação

O código atual **apresenta erros de compilação com `g++`**, pois algumas funções são chamadas antes de terem sido declaradas em `funcoes.h`. O comando a seguir permite reproduzir o diagnóstico:

```bash
g++ CONTEUDO_P1/programa-3-biblioteca/programa-3-com-biblioteca.cpp -o estoque-modular
```

Execute-o a partir da raiz do repositório. **Não há garantia de que um executável será gerado** com a implementação atual.

## 💡 Aprendizado técnico

A separação em arquivos facilita a organização, mas exige declarar as funções antes de utilizá-las. Uma possível evolução seria colocar protótipos no cabeçalho e implementações em arquivos-fonte. Trata-se de uma **sugestão de melhoria**, não de algo já realizado no projeto.

O funcionamento pretendido do estoque está descrito no [README da versão original](../programa-3/README.md).
