# 🧠 Estrutura de Dados — Exercícios de programação

Coleção acadêmica de programas desenvolvidos para estudar **funções, vetores, matrizes, manipulação de strings, ordenação e busca**. O material está dividido em dois conjuntos de exercícios, identificados como P1 e P2.

## 📚 Organização do repositório

| Conjunto | Assuntos principais | Acesso |
|---|---|---|
| **P1** | Funções, laços, vetores, arquivos de cabeçalho e matrizes. | [Conteúdo P1](CONTEUDO_P1/README.md) |
| **P2** | Strings, Bubble Sort, busca binária e classificação de times. | [Conteúdo P2](CONTEUDO_P2/README.md) |
| **VS Code** | Configurações locais de compilação e depuração. | [Tarefas](.vscode/tasks.json) · [Depuração](.vscode/launch.json) |

## 📂 Guia dos projetos

| Projeto | Descrição | Documentação |
|---|---|---|
| Programa 1 | Cálculos encadeados com funções. | [Abrir](CONTEUDO_P1/programa-1/README.md) |
| Programa 2 | Tabuadas com laços aninhados. | [Abrir](CONTEUDO_P1/programa-2/README.md) |
| Programa 3 | Cadastro e consulta de produtos com vetores. | [Abrir](CONTEUDO_P1/programa-3/README.md) |
| Programa 3 com cabeçalho | Versão reorganizada para estudar funções em `.h`. | [Abrir](CONTEUDO_P1/programa-3-biblioteca/README.md) |
| Programa 4 | Separação de variáveis e funções em cabeçalhos. | [Abrir](CONTEUDO_P1/programa-4-biblioteca/README.md) |
| Programa 5 | Calculadora com funções distribuídas em arquivos `.h`. | [Abrir](CONTEUDO_P1/programa-5-biblioteca/README.md) |
| Programa 6 | Mapa de poltronas e simulação de vendas. | [Abrir](CONTEUDO_P1/programa-6-biblioteca/README.md) |
| Tabela de times | Classificação por pontuação e desempate por gols. | [Abrir](CONTEUDO_P2/Exercicio_tabelaPontuacao/README.md) |

Os exercícios de manipulação de strings e de busca binária estão descritos no [guia P2](CONTEUDO_P2/README.md).

## ⚙️ Como compilar um exercício

Os arquivos utilizam a extensão `.cpp` e podem ser compilados individualmente com `g++`, desde que o compilador esteja instalado.

Exemplo, executado na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-1/programa-1.cpp -o programa1
./programa1
```

No Windows, execute o arquivo `.exe` correspondente. Alguns programas empregam `printf` e `scanf`, típicos da linguagem C, embora o código esteja salvo como `.cpp`.

## ⚠️ Estado e limitações conhecidos

| Exercício | Observação |
|---|---|
| [Programa 3 com cabeçalho](CONTEUDO_P1/programa-3-biblioteca/README.md) | Apresenta erros de compilação com `g++` devido à ordem das declarações de funções. |
| [Programa 5](CONTEUDO_P1/programa-5-biblioteca/README.md) | Não trata explicitamente divisão por zero. |
| [Programa 6](CONTEUDO_P1/programa-6-biblioteca/README.md) | Não valida completamente as seleções de poltronas nem a opção de saída do menu. |
| [Tabela de times](CONTEUDO_P2/Exercicio_tabelaPontuacao/README.md) | Utiliza comandos `pause` e `cls`, próprios do Windows. |

O repositório também contém executáveis `.exe` previamente compilados. Para estudar e reproduzir os exercícios, **prefira os arquivos-fonte**. As configurações do VS Code incluem caminhos locais de Windows/MSYS2 que podem precisar de ajustes em outro computador.

## 🔗 Referências

- [GCC — documentação oficial](https://gcc.gnu.org/onlinedocs/)
- [VS Code — programação em C++](https://code.visualstudio.com/docs/languages/cpp)
- [GitHub — Markdown](https://docs.github.com/pt/get-started/writing-on-github)
