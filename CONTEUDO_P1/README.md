# 📘 Conteúdo P1 — Funções, vetores e matrizes

[← Página inicial](../README.md) · [Conteúdo P2 →](../CONTEUDO_P2/README.md)

## 📌 Visão geral

O primeiro conjunto de exercícios apresenta fundamentos de programação de forma progressiva: **funções, laços de repetição, vetores, organização em arquivos de cabeçalho e matrizes**. Os exemplos são programas independentes, executados no terminal.

## 📂 Índice de programas

| Projeto | Tema principal | Documentação |
|---|---|---|
| [Programa 1](programa-1/programa-1.cpp) | Operações matemáticas encadeadas com funções. | [Guia](programa-1/README.md) |
| [Programa 2](programa-2/programa-01.cpp) | Tabuadas e laços `for` aninhados. | [Guia](programa-2/README.md) |
| [Programa 3](programa-3/programa-3.cpp) | Cadastro e consulta de até três produtos. | [Guia](programa-3/README.md) |
| [Programa 3 com cabeçalho](programa-3-biblioteca/programa-3-com-biblioteca.cpp) | Estudo da organização de funções em `.h`. | [Guia](programa-3-biblioteca/README.md) |
| [Programa 4](programa-4-biblioteca/programa.cpp) | Variáveis e funções separadas em cabeçalhos. | [Guia](programa-4-biblioteca/README.md) |
| [Programa 5](programa-5-biblioteca/main.cpp) | Calculadora com funções em arquivos `.h`. | [Guia](programa-5-biblioteca/README.md) |
| [Programa 6](programa-6-biblioteca/mainBus.cpp) | Mapa de poltronas e controle de ocupação. | [Guia](programa-6-biblioteca/README.md) |

O arquivo [`programa-02.cpp`](programa-2/programa-02.cpp), na pasta do Programa 2, está vazio e não contém um exercício adicional.

## 🧩 Principais conceitos

**Funções e parâmetros:** o Programa 1 recebe três números e repassa os resultados entre funções. O Programa 2 usa funções para organizar um menu de tabuadas.

**Vetores:** o Programa 3 utiliza conjuntos de vetores paralelos para associar nome, código, preço e estoque dos produtos. A versão com cabeçalho permite estudar uma forma diferente de organizar esse código.

**Matrizes:** o Programa 6 representa poltronas com uma matriz de 100 linhas e quatro colunas. Os estados `0`, `1`, `8` e `-1` identificam disponibilidade, ocupação e posições não cadastradas.

## ⚙️ Exemplo de compilação

Com `g++` instalado, execute na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-1/programa-1.cpp -o programa1
./programa1
```

Cada exercício contém sua própria função `main` e deve ser compilado separadamente. Para os demais comandos, consulte o README de cada programa.

## ⚠️ Pontos de atenção

- A versão [Programa 3 com cabeçalho](programa-3-biblioteca/README.md) apresenta erros de compilação com `g++`; isso está explicado em seu guia.
- A calculadora do [Programa 5](programa-5-biblioteca/README.md) não verifica divisão por zero.
- O sistema de ônibus do [Programa 6](programa-6-biblioteca/README.md) apresenta limitações na validação de poltronas e no encerramento do menu.
- Algumas implementações utilizam `printf` e `scanf`, embora os arquivos tenham extensão `.cpp`.
- Os arquivos `.exe` são executáveis Windows já incluídos no repositório; é recomendável compilar o código-fonte no seu ambiente.

[Continuar para o Conteúdo P2 →](../CONTEUDO_P2/README.md)
