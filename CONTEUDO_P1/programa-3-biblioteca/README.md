# 🧩 Programa 3 — Relatório da versão com cabeçalho

[← Conteúdo P1](../README.md) · [Página inicial](../../README.md) · [Versão em arquivo único](../programa-3/README.md)

## 📌 Visão geral

Esta pasta contém uma segunda organização do exercício de estoque. Em vez de reunir toda a implementação no arquivo principal, o projeto concentra as **variáveis e as funções de cadastro, consulta, compra e listagem** em um cabeçalho.

## 📂 Arquivos encontrados

| Arquivo | Responsabilidade |
|---|---|
| [`programa-3-com-biblioteca.cpp`](programa-3-com-biblioteca.cpp) | Contém a função `main`, inclui o cabeçalho e controla a abertura do menu. |
| [`funcoes.h`](funcoes.h) | Define os vetores de produtos e implementa as funções utilizadas pelo menu. |
| [`programa-3-com-biblioteca.exe`](programa-3-com-biblioteca.exe) | Executável para Windows incluído no repositório. |

## 🔎 Análise técnica

O programa trabalha com até três produtos, utilizando vetores paralelos para armazenar nome, código, preço e estoque. O arquivo principal chama a função `Menu`; as operações são realizadas pelas rotinas do cabeçalho. A proposta permite comparar uma implementação concentrada em um único arquivo com outra que utiliza um `.h`.

## ⚠️ Problemas identificados

O cabeçalho apresenta chamadas de funções antes de suas declarações, o que causa **erros de compilação em C++**. Também há uma chamada de `scanf` que utiliza a variável de controle sem fornecer seu endereço, situação que pode provocar comportamento indefinido caso esse trecho seja alcançado após outros ajustes.

Portanto, o executável já armazenado na pasta **não comprova que o código atual possa ser recompilado ou executado corretamente**. Esses problemas estão no [código existente](funcoes.h) e não foram corrigidos nesta revisão documental.
