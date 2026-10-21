# Programa 3 · Controle de estoque em memória

![C](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white) ![Interface](https://img.shields.io/badge/Interface-CLI-555)

[← Conteúdo P1](../README.md) · [↑ Índice geral](../../README.md) · [Código-fonte](programa-3.cpp)

## 🎮 Desafio · Gerente de estoque

> **Objetivo:** Investigue como vetores paralelos armazenam informações de até três produtos. XP são **pontos simbólicos de estudo**, não coletados pelo programa.

| Fase | Experimento | Fonte / evidência | XP |
|---|---|---|--:|
| Cadastrar | Insira nome, código, preço e quantidade | [`Cprodutos`](programa-3.cpp) | 15 |
| Consultar | Localize um registro pelo código | [`consulta`](programa-3.cpp) | 20 |
| Simular compra | Observe total e atualização de estoque | [`compra`](programa-3.cpp) | 25 |

**Checkpoints de conclusão**

- [ ] Reconheci o mesmo índice usado nos quatro vetores.
- [ ] Entendi que os dados são descartados ao encerrar.
- [ ] Localizei as opções do menu no código.

<details>
<summary><strong>✨ Desbloquear desafio extra</strong></summary>

Em cópia local, proponha um teste para estoque insuficiente e registre a resposta observada antes de alterar a implementação.

</details>

**Fidelidade ao código:** Capacidade fixa de três produtos; não é um sistema comercial nem possui banco de dados.

---


## O projeto

Aplicação de terminal voltada ao cadastro de até **3 produtos** e à simulação de consulta e compra. É um exercício de **vetores paralelos, funções, validações e passagem de dados por parâmetros**.

| Recurso | O que faz | Estrutura no código |
|---|---|---|
| Cadastrar | Registra nome, código, preço e estoque. | `Cprodutos`, `Ccodigo`, `Cvalor`, `Cestoque` |
| Consultar | Localiza um produto pelo código. | `consulta` |
| Comprar | Solicita produtos e quantidades e calcula o total. | `compra` |
| Exibir | Imprime a tabela de produtos. | `ExibirTabela`, `Pprodutos` |
| Sair | Encerra pelo menu. | `encerrar` |

## Estrutura dos dados

```mermaid
flowchart TD
    M["Menu"] --> C["Cadastro"]
    M --> Q["Consulta"]
    M --> V["Compra"]
    M --> T["Tabela"]
    C --> A["Vetores: produto, codigo, valor e estoque"]
    Q --> A
    V --> A
    T --> A
```

Os quatro vetores compartilham o **mesmo índice**, que identifica cada produto. Os dados não são gravados em banco de dados ou arquivo; são perdidos após o encerramento.

## Compilação

Na raiz do repositório:

```bash
g++ CONTEUDO_P1/programa-3/programa-3.cpp -o estoque
./estoque
```

No Windows, execute `estoque.exe` após compilar.

## Arquivos

| Arquivo/pasta | Papel |
|---|---|
| [programa-3.cpp](programa-3.cpp) | Código principal e rotinas do sistema. |
| [programa-3.exe](programa-3.exe) | Executável incluído para Windows. |
| [output/](output/README.md) | Pasta com executável adicional. |

> Projeto didático: capacidade fixa de três registros e armazenamento temporário. Para estudar modularização, veja a [variação com cabeçalho](../programa-3-biblioteca/README.md).
