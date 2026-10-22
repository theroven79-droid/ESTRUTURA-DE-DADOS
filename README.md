# 🧠 Estrutura de Dados — Relatório do repositório

## 📌 Apresentação

Este repositório reúne **exercícios acadêmicos de programação** organizados em dois conjuntos, identificados como P1 e P2. O material aborda funções, laços de repetição, vetores, matrizes, manipulação de caracteres, ordenação e busca. São atividades independentes, desenvolvidas principalmente para execução no terminal.

A documentação está organizada de forma hierárquica: este relatório apresenta uma visão geral, e cada pasta com `README.md` contém a análise dos arquivos correspondentes.

## 📂 Estrutura do conteúdo

| Diretório | O que reúne | Documentação |
|---|---|---|
| [`CONTEUDO_P1/`](CONTEUDO_P1/README.md) | Sete exercícios sobre funções, repetição, vetores, cabeçalhos e matrizes. | [Relatório P1](CONTEUDO_P1/README.md) |
| [`CONTEUDO_P2/`](CONTEUDO_P2/README.md) | Exercícios de texto, ordenação, busca binária e classificação de times. | [Relatório P2](CONTEUDO_P2/README.md) |
| [`.vscode/`](.vscode/tasks.json) | Configurações locais do VS Code para compilação e depuração. | [Tarefas](.vscode/tasks.json) · [Depuração](.vscode/launch.json) |

## 📚 Principais trabalhos

| Atividade | Síntese |
|---|---|
| [Cálculos com funções](CONTEUDO_P1/programa-1/README.md) | Três operações matemáticas realizadas em sequência. |
| [Tabuadas](CONTEUDO_P1/programa-2/README.md) | Repetição com `for` e cubo dos resultados de multiplicações. |
| [Controle de estoque](CONTEUDO_P1/programa-3/README.md) | Cadastro, consulta e compra de produtos representados por vetores. |
| [Estoque com cabeçalho](CONTEUDO_P1/programa-3-biblioteca/README.md) | Organização alternativa das rotinas do estoque. |
| [Variáveis e funções em cabeçalhos](CONTEUDO_P1/programa-4-biblioteca/README.md) | Leitura de valores e uso de funções em arquivos `.h`. |
| [Operações aritméticas](CONTEUDO_P1/programa-5-biblioteca/README.md) | Calculadora com funções distribuídas em cabeçalhos. |
| [Controle de poltronas](CONTEUDO_P1/programa-6-biblioteca/README.md) | Representação de assentos e simulação de compra de passagens. |
| [Exercícios de texto, ordenação e busca](CONTEUDO_P2/README.md) | Manipulação de caracteres, Bubble Sort e busca binária. |
| [Classificação de times](CONTEUDO_P2/Exercicio_tabelaPontuacao/README.md) | Ordenação de 12 equipes por pontos, com desempate por gols. |

## 🔎 Características dos arquivos

Os códigos utilizam a extensão `.cpp` e, em vários casos, funções como `printf` e `scanf`. Há programas em arquivo único e outros com implementações distribuídas em cabeçalhos `.h`. Algumas pastas incluem executáveis `.exe`, além de subpastas `output` destinadas aos artefatos compilados.

O projeto registra também configurações de compilação do VS Code com **caminhos específicos de Windows e MSYS2**; essas configurações podem exigir adaptação em outros ambientes.

## 📝 Considerações finais

Os exercícios documentam etapas de aprendizagem, **não aplicações prontas para produção**. Entre as limitações verificadas estão erros de compilação na versão do estoque com cabeçalho, ausência de proteção contra divisão por zero na calculadora, validações incompletas no sistema de ônibus e comandos específicos do Windows no ranking de times.

Para compreender cada atividade, consulte os relatórios das respectivas pastas e os códigos-fonte vinculados. As descrições foram elaboradas com base nos arquivos presentes, sem presumir funcionalidades inexistentes.

**Referências de apoio:** [Documentação do GCC](https://gcc.gnu.org/onlinedocs/) · [VS Code — C++](https://code.visualstudio.com/docs/languages/cpp) · [Markdown no GitHub](https://docs.github.com/pt/get-started/writing-on-github).
