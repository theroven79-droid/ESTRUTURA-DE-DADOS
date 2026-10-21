# Estrutura de Dados

Exercícios de programação em arquivos `.cpp`, organizados em **CONTEUDO_P1** e **CONTEUDO_P2**. O acervo pratica funções, ponteiros, vetores, matrizes, strings, separação em cabeçalhos, ordenação e busca por meio de programas de terminal.

## Guia do conteúdo

| Pasta | O que estudar | Guia |
|---|---|---|
| `CONTEUDO_P1` | Funções aritméticas, tabuadas, estoque de produtos, cabeçalhos e poltronas de ônibus | [Conteúdo P1](CONTEUDO_P1/README.md) |
| `CONTEUDO_P2` | Manipulação de frases, Bubble Sort, busca binária e classificação de times | [Conteúdo P2](CONTEUDO_P2/README.md) |
| `.vscode` | Tarefas de compilação e configuração de depuração para Windows/MSYS2 | [tasks.json](.vscode/tasks.json) · [launch.json](.vscode/launch.json) |

Cada exercício tem sua própria entrada `main`, quando implementada. Compile o programa escolhido separadamente; os cabeçalhos locais são incluídos pelo arquivo principal.

## Primeiro programa

Com `g++` disponível, execute a partir da raiz do repositório:

```bash
mkdir -p /tmp/estrutura-de-dados
g++ -std=c++17 CONTEUDO_P1/programa-1/programa-1.cpp -o /tmp/estrutura-de-dados/programa-1
/tmp/estrutura-de-dados/programa-1
```

Para entradas `1`, `2` e `3`, o código produz os resultados **13**, **48** e **110592**. A função chamada `soma` acrescenta 10 aos dois primeiros valores; a etapa seguinte soma o terceiro valor e multiplica por 3; a última eleva o resultado ao cubo. Veja a implementação em [programa-1.cpp](CONTEUDO_P1/programa-1/programa-1.cpp).

Os comandos deste guia usam C++17 e gravam os executáveis fora da árvore de fontes. Os arquivos `.exe` já presentes são artefatos compilados; para estudar a versão atual, compile os respectivos fontes.

## Exemplos de estudo

- **Estoque:** [programa-3.cpp](CONTEUDO_P1/programa-3/programa-3.cpp) mantém até três produtos em vetores paralelos, com cadastro, consulta por código, compra e tabela atualizada.
- **Matrizes:** [mainBus.cpp](CONTEUDO_P1/programa-6-biblioteca/mainBus.cpp) usa funções de [funcoes.h](CONTEUDO_P1/programa-6-biblioteca/funcoes.h) para representar poltronas e calcular ocupação e receita.
- **Ordenação e busca:** [Exercicio_02.cpp](CONTEUDO_P2/Exercicio_02.cpp) ordena dez inteiros e faz busca binária sobre o vetor ordenado.
- **Classificação:** [tabela de pontuação](CONTEUDO_P2/Exercicio_tabelaPontuacao/main.cpp) ordena 12 times por pontos e desempata por gols, mantendo os dados associados durante as trocas.

## Estado dos exercícios e compatibilidade

| Item | Situação observada no fonte |
|---|---|
| [programa-02.cpp](CONTEUDO_P1/programa-2/programa-02.cpp) | Arquivo vazio; não gera um programa executável. |
| [programa-3-biblioteca](CONTEUDO_P1/programa-3-biblioteca/programa-3-com-biblioteca.cpp) | A compilação com `g++` falha porque funções são usadas antes de serem declaradas. |
| [Ônibus](CONTEUDO_P1/programa-6-biblioteca/funcoes.h) | A opção `0 - Sair` aparece no menu, mas não tem um caso que encerre o laço. |
| [Análise de frase](CONTEUDO_P2/Exercicio_01.cpp) | A rotina rotulada como contagem de palavras conta caracteres. |
| [Cadastro de times](CONTEUDO_P2/Exercicio_tabelaPontuacao/cadastroTimes.h) | Usa `system("pause")` e `system("cls")`, comandos do ambiente Windows. |
| Configuração do VS Code | Os caminhos de compilador e depurador apontam para `c:\\tools\\msys64\\ucrt64\\bin`; são específicos da máquina configurada. |

Os dados dos programas ficam em memória; o arquivo [inserir.txt](CONTEUDO_P2/Exercicio_tabelaPontuacao/inserir.txt) é uma entrada de exemplo, não um banco de dados. Não há uma suíte de testes automatizados no repositório. Consulte os guias internos para comandos e limitações de cada grupo.

## Fontes desta documentação

As descrições se baseiam nos arquivos `.cpp`, `.h`, nas configurações `.vscode` e na entrada `inserir.txt` deste repositório. Os links acima permitem conferir cada comportamento no próprio código.
