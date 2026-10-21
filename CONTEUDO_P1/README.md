# 📘 Conteúdo P1 — Funções, vetores e matrizes

[← Índice geral](../README.md) · [Avançar para P2 →](../CONTEUDO_P2/README.md)

Nesta etapa, os exercícios percorrem **operações em funções, repetição, vetores, modularização com cabeçalhos e matrizes**, culminando na simulação de ocupação de ônibus.

## 📂 Programas

| Pasta | Entrada principal | Objetivo | Guia |
|---|---|---|---|
| `programa-1` | [programa-1.cpp](programa-1/programa-1.cpp) | Sequência de cálculos com funções | [README](programa-1/README.md) |
| `programa-2` | [programa-01.cpp](programa-2/programa-01.cpp) | Tabuadas e cubo dos produtos | [README](programa-2/README.md) |
| `programa-3` | [programa-3.cpp](programa-3/programa-3.cpp) | Cadastro, consulta e compra de produtos | [README](programa-3/README.md) |
| `programa-3-biblioteca` | [programa-3-com-biblioteca.cpp](programa-3-biblioteca/programa-3-com-biblioteca.cpp) | Separação em cabeçalho | [README](programa-3-biblioteca/README.md) |
| `programa-4-biblioteca` | [programa.cpp](programa-4-biblioteca/programa.cpp) | Variáveis e funções em `.h` | [README](programa-4-biblioteca/README.md) |
| `programa-5-biblioteca` | [main.cpp](programa-5-biblioteca/main.cpp) | Operações aritméticas modulares | [README](programa-5-biblioteca/README.md) |
| `programa-6-biblioteca` | [mainBus.cpp](programa-6-biblioteca/mainBus.cpp) | Matriz de assentos e passagens | [README](programa-6-biblioteca/README.md) |

O arquivo [`programa-02.cpp`](programa-2/programa-02.cpp) está vazio; não corresponde a outro exercício implementado.

## 💡 Estruturas e comportamentos

### Cadastro de produtos

O [programa 3](programa-3/README.md) trabalha com **até três produtos** por meio de vetores paralelos de nomes, códigos, preços e quantidades. Seu menu inclui cadastrar, consultar, comprar, exibir produtos e encerrar. Os dados permanecem apenas na memória.

### Calculadora com cabeçalhos

O [programa 5](programa-5-biblioteca/README.md) organiza soma, subtração, multiplicação, divisão e cubo em diferentes arquivos `.h`. A divisão não impede explicitamente divisor zero.

### Poltronas de ônibus

O [programa 6](programa-6-biblioteca/README.md) utiliza matriz **100 × 4** para representar assentos.

| Valor | Estado |
|---:|---|
| `0` | Disponível comum |
| `1` | Disponível especial |
| `8` | Ocupado |
| `-1` | Posição não cadastrada |

O relatório reúne ocupação, disponibilidade e valor vendido, mas o código possui limitações na validação de assentos e no encerramento do menu.

## ⚙️ Executar um exemplo

Na raiz do repositório, com `g++`:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o estoque
./estoque
```

Consulte o README específico de cada pasta para os demais comandos.

## ⚠️ Observações

- A versão `programa-3-biblioteca` apresenta erros de compilação com `g++` em razão de funções chamadas antes de suas declarações.
- Alguns projetos usam estilo de linguagem C apesar da extensão `.cpp`.
- Os `.exe` são binários Windows; não substituem as fontes para estudo.
- O diretório `.vscode` tem caminhos locais específicos de Windows/MSYS2, que podem requerer ajuste.
