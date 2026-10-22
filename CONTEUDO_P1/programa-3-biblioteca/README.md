# 🧩 Relatório da pasta — Programa 3 com cabeçalho

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md) · [Programa 3 original](../programa-3/README.md)

## 📌 Resumo

Esta pasta apresenta uma **variação do controle de estoque** desenvolvida para estudar a organização do código em arquivos separados. A lógica do programa permanece relacionada ao cadastro, à consulta e à compra de produtos, mas as rotinas são concentradas no cabeçalho `funcoes.h`.

## 📂 Arquivos encontrados

| Arquivo | Responsabilidade |
|---|---|
| [`programa-3-com-biblioteca.cpp`](programa-3-com-biblioteca.cpp) | Contém a função `main`, inclui o cabeçalho e chama o menu. |
| [`funcoes.h`](funcoes.h) | Reúne as funções e variáveis empregadas no exercício. |
| [`programa-3-com-biblioteca.exe`](programa-3-com-biblioteca.exe) | Executável Windows já existente no diretório. |

## 🧠 Organização e funcionamento

O arquivo principal define a localização utilizada para exibir caracteres no terminal e mantém um laço que chama `Menu` enquanto a variável de controle permite a continuidade da aplicação. As operações de estoque estão no cabeçalho.

Essa disposição permite analisar a diferença entre concentrar toda a implementação em um arquivo e separar parte dela em um `.h`.

## ⚠️ Estado técnico

A implementação apresenta **erros de compilação com `g++`** relacionados ao uso de funções antes de suas declarações. Por isso, o código-fonte não deve ser descrito como uma versão pronta para compilação sem ajustes.

O binário existente não comprova que o código atual possa ser recompilado sem problemas. Para comparar as duas organizações, consulte o [Programa 3 original](../programa-3/README.md).
