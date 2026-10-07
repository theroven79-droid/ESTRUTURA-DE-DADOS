#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int identificador = 0;
char produto[3][20] = {0};
int codigo[3] = {0};
float valor[3] = {0.0};
int estoque[3] = {0};

// ----------------------- FUNCOES -----------------------
// Funcao responsavel pelo menu principal
void Menu(int *identificar, char produto[][20], int codigo[],
          float valor[], int estoque[])
{
    int opcao;
    while (1)
    {
        // Controla a saida da funcao de cadastro
        int volta = 0;

        printf("\n---- MENU INICIAL ----\n\n"
               "1 - CADASTRAR PRODUTO\n"
               "2 - CONSULTAR ESTOQUE\n"
               "3 - COMPRAR PRODUTOS\n"
               "4 - MOSTRAR TABELA DOS PRODUTOS\n"
               "5 - SAIR\n"
               "OPCAO: ");

        // Verifica se o usuario realmente digitou um numero
        if (scanf("%d", &opcao) != 1)
        {
            Limparbuffer();
            printf("\n[OPCAO INVALIDA]\n");
            continue;
        }
        // Limpa o Enter deixado pelo scanf
        Limparbuffer();
        switch (opcao)
        {
        case 1:
            // Chama a funcao de cadastro
            Cprodutos(produto, codigo, valor, estoque, &volta);
            // Mostra a tabela depois do cadastro
            Pprodutos(produto, codigo, valor, estoque);
            break;
        case 2:
            // Consulta produto pelo codigo
            consulta(estoque, produto, valor, codigo);
            break;
        case 3:
            // Abre a area de compras
            compra(estoque, produto, valor, codigo);
            break;
        case 4:
            // Mostra a tabela dos produtos a qualquer momento
            ExibirTabela(produto, codigo, valor, estoque);
            break;
        case 5:
            // Encerra o programa
            encerrar(identificar);
            printf("\nFechando programa...\n\n");
            break;
        default:
            printf("\n[OPCAO INVALIDA]\n");
            break;
        }
        // Encerra o menu
        if (opcao == 5)
        {
            break;
        }
    }
}

// ----------------------- CADASTRO DO PRODUTO -----------------------
// Funcao responsavel pelo cadastro do nome do produto
void Cprodutos(char produto[][20], int codigo[],
               float valor[], int estoque[], int *volta)
{
    while (*volta == 0)
    {
        int cadastrados = 0;
        // Guarda a primeira posicao livre encontrada
        int indice = -1;
        printf("\n--- SITUACAO DOS PRODUTOS ---\n");
        // Verifica quais produtos ja estao cadastrados
        for (int i = 0; i < 3; i++)
        {
            if (produto[i][0] == '\0')
            {
                printf("[PRODUTO %d SEM CADASTRO]\n", i + 1);

                // Guarda somente a primeira posicao vazia
                if (indice == -1)
                {
                    indice = i;
                }
            }
            else
            {
                printf("[%s CADASTRADO]\n", produto[i]);

                cadastrados++;
            }
        }
        // Se os 3 produtos ja estiverem cadastrados,
        // encerra diretamente sem perguntar se deseja cadastrar mais
        if (cadastrados == 3)
        {
            printf("\n[TODOS OS 3 PRODUTOS JA FORAM CADASTRADOS]\n");
            *volta = 1;
            break;
        }
        printf("\n--- CADASTRO DE PRODUTO ---\n");
        // ----------------
        // CADASTRO DO NOME
        // ----------------
        while (1)
        {
            printf("PRODUTO %d: ", indice + 1);
            // Le o nome do produto
            if (fgets(produto[indice],
                      sizeof(produto[indice]),
                      stdin) == NULL)
            {
                produto[indice][0] = '\0';
                printf("\n[ERRO NA LEITURA DO PRODUTO]\n");
                continue;
            }
            // Remove o Enter do fgets
            produto[indice][strcspn(produto[indice], "\n")] = '\0';
            // Impede nome vazio
            if (produto[indice][0] == '\0')
            {
                printf("\n[NOME DO PRODUTO NAO PODE SER VAZIO]\n\n");
                continue;
            }
            // Converte o nome para maiusculo
            for (int j = 0; produto[indice][j] != '\0'; j++)
            {
                produto[indice][j] =
                    (char)toupper((unsigned char)produto[indice][j]);
            }
            break;
        }
        // Codigo, valor e estoque usam exatamente
        // o mesmo indice do produto
        Ccodigo(codigo, valor, estoque, indice);
        // Um novo produto acabou de ser cadastrado
        cadastrados++;
        // Se este foi o terceiro produto,
        // nao pergunta se deseja cadastrar mais
        if (cadastrados == 3)
        {
            printf("\n[TERCEIRO PRODUTO CADASTRADO]\n");
            printf("[TODOS OS PRODUTOS FORAM CADASTRADOS]\n");
            *volta = 1;
            break;
        }

        // Somente pergunta se deseja cadastrar outro
        // quando ainda existe alguma posicao livre
        while (1)
        {
            printf("\nDESEJA CADASTRAR MAIS PRODUTOS?\n"
                   "1 - SIM, 2 - NAO: ");
            // Valida a entrada
            if (scanf("%d", volta) != 1)
            {
                Limparbuffer();
                printf("\n[RESPOSTA INVALIDA]\n"
                       "[DIGITE 1 OU 2]\n");
                continue;
            }
            Limparbuffer();
            if (*volta == 1)
            {
                // 0 mantem o while do cadastro rodando
                *volta = 0;
                break;
            }
            else if (*volta == 2)
            {
                // 1 encerra o cadastro
                *volta = 1;
                break;
            }
            else
            {
                printf("\n[RESPOSTA INVALIDA]\n"
                       "[DIGITE 1 OU 2]\n");
            }
        }
    }
}

// ----------------------- CADASTRO DO CODIGO -----------------------
// Funcao responsavel pelo codigo do produto
void Ccodigo(int codigo[], float valor[],
             int estoque[], int indice)
{
    while (1)
    {
        int codigoDuplicado = 0;
        printf("CODIGO[%d]: ", indice + 1);
        // Verifica se foi digitado um numero inteiro
        if (scanf("%d", &codigo[indice]) != 1)
        {
            Limparbuffer();
            printf("\n[CODIGO INVALIDO]\n\n");
            continue;
        }
        Limparbuffer();
        // Codigo precisa ser maior que zero
        if (codigo[indice] <= 0)
        {
            printf("\n[O CODIGO DEVE SER MAIOR QUE ZERO]\n\n");
            continue;
        }
        // Verifica se o codigo ja pertence a outro produto
        for (int i = 0; i < 3; i++)
        {
            if (i != indice &&
                codigo[i] == codigo[indice])
            {
                codigoDuplicado = 1;
                break;
            }
        }
        if (codigoDuplicado == 1)
        {
            printf("\n[CODIGO JA CADASTRADO]\n"
                   "[DIGITE OUTRO CODIGO]\n\n");
            continue;
        }
        break;
    }
    // Depois do codigo chama o cadastro do valor
    Cvalor(valor, estoque, indice);
}

// ----------------------- CADASTRO DO VALOR -----------------------
// Funcao responsavel pelo valor unitario
void Cvalor(float valor[], int estoque[], int indice)
{
    while (1)
    {
        printf("VALOR[%d]: ", indice + 1);
        // Verifica se foi digitado um numero
        if (scanf("%f", &valor[indice]) != 1)
        {
            Limparbuffer();
            printf("\n[VALOR INVALIDO]\n\n");
            continue;
        }
        Limparbuffer();
        // Nao permite valor zero ou negativo
        if (valor[indice] <= 0)
        {
            printf("\n[O VALOR DEVE SER MAIOR QUE ZERO]\n\n");
            continue;
        }
        break;
    }
    // Depois do valor chama o cadastro do estoque
    Cestoque(estoque, indice);
}

// ----------------------- CADASTRO DO ESTOQUE -----------------------
// Funcao responsavel pela quantidade em estoque
void Cestoque(int estoque[], int indice)
{
    while (1)
    {
        printf("QUANTIDADE[%d]: ", indice + 1);
        // Verifica se foi digitado um inteiro
        if (scanf("%d", &estoque[indice]) != 1)
        {
            Limparbuffer();
            printf("\n[QUANTIDADE INVALIDA]\n\n");
            continue;
        }
        Limparbuffer();
        // Estoque pode ser zero,
        // mas nunca pode ser negativo
        if (estoque[indice] < 0)
        {
            printf("\n[A QUANTIDADE NAO PODE SER NEGATIVA]\n\n");
            continue;
        }
        break;
    }
}

// ----------------------- TABELA DE PRODUTOS -----------------------
// Funcao que imprime a tabela dos produtos cadastrados
void Pprodutos(char produto[][20], int codigo[],
               float valor[], int estoque[])
{
    int existeProduto = 0;
    // Verifica se existe algum produto cadastrado
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            existeProduto = 1;
            break;
        }
    }
    // Se nao existir produto, nao imprime tabela vazia
    if (existeProduto == 0)
    {
        printf("\n[NENHUM PRODUTO FOI CADASTRADO]\n\n");
        return;
    }
    printf("\n\t----- TABELA DOS PRODUTOS -----\n");
    printf("+---------------------+----------+------------+------------+--------------+\n"
           "| %-19s | %-8s | %-10s | %-10s | %-12s |\n"
           "+---------------------+----------+------------+------------+--------------+\n",
           "PRODUTO",
           "CODIGO",
           "VALOR",
           "QUANTIDADE",
           "VALOR TOTAL");
    // Mostra todos os produtos cadastrados
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            printf("| %-19s | %-8d | %-10.2f | %-10d | %-12.2f |\n",
                   produto[i],
                   codigo[i],
                   valor[i],
                   estoque[i],
                   valor[i] * estoque[i]);
        }
    }
    printf("+---------------------+----------+------------+------------+--------------+\n\n");
}

// Funcao chamada pela opcao 4 do menu
// Sempre mostra a tabela atualizada dos produtos
void ExibirTabela(char produto[][20], int codigo[],
                  float valor[], int estoque[])
{
    Pprodutos(produto, codigo, valor, estoque);
}

// ----------------------- CONSULTA -----------------------
// Funcao responsavel pela consulta de um produto pelo codigo
void consulta(int estoque[], char produto[][20],
              float valor[], int codigo[])
{
    int codigoConsulta;
    // Guarda a posicao encontrada
    int indiceEncontrado = -1;
    // Quantidade de produtos cadastrados
    int verificar = 0;
    printf("\n--- CONSULTA DE ESTOQUE ---\n");
    printf("\n[VERIFICANDO]...\n\n");

    // Conta os produtos cadastrados e mostra os codigos disponiveis para consulta
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            verificar++;

            printf("[%s - CODIGO %d - DISPONIVEL PARA CONSULTA]\n",
                   produto[i],
                   codigo[i]);
        }
    }
    // Nao existe produto para consultar
    if (verificar == 0)
    {
        printf("\n[NENHUM PRODUTO FOI CADASTRADO]\n\n");
        return;
    }
    printf("\n[%d PRODUTO(S) CADASTRADO(S)]\n\n", verificar);
    printf("DIGITE O CODIGO DO PRODUTO: ");
    // Valida a entrada
    if (scanf("%d", &codigoConsulta) != 1)
    {
        Limparbuffer();
        printf("\n[CODIGO INVALIDO]\n\n");
        return;
    }
    Limparbuffer();
    // Procura o codigo digitado
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0' &&
            codigo[i] == codigoConsulta)
        {
            indiceEncontrado = i;

            break;
        }
    }
    // Codigo nao encontrado
    if (indiceEncontrado == -1)
    {
        printf("\n[CODIGO NAO CADASTRADO]\n\n");
        return;
    }
    printf("\n\t--- PRODUTO ---\n"
           "\t|CODIGO: %d\n"
           "\t|PRODUTO: %s\n"
           "\t|VALOR: %.2f\n"
           "\t|ESTOQUE: %d\n"
           "\t|VALOR TOTAL: %.2f\n"
           "\t-----------------\n",
           codigo[indiceEncontrado],
           produto[indiceEncontrado],
           valor[indiceEncontrado],
           estoque[indiceEncontrado],
           valor[indiceEncontrado] * estoque[indiceEncontrado]);

    // Produto existe, mas esta sem estoque
    if (estoque[indiceEncontrado] == 0)
    {
        printf("\n[PRODUTO SEM ESTOQUE NO MOMENTO]\n");
    }
}

// ----------------------- COMPRA -----------------------
// Funcao responsavel pela compra dos produtos
void compra(int estoque[], char produto[][20],
            float valor[], int codigo[])
{
    int resposta = 0;
    int codigoCompra;
    int quantidade;
    int verificar = 0;
    // Vetores que armazenam os dados da venda
    // Cada posicao corresponde ao mesmo produto
    int codigoVenda[3] = {0};
    int quantidadeVenda[3] = {0};
    // Guarda o total de toda a compra
    float totalCompra = 0.0f;
    printf("\n--- COMPRA DE PRODUTOS ---\n");
    printf("\n[VERIFICANDO]...\n\n");
    // Mostra os produtos disponiveis
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            verificar++;
            if (estoque[i] > 0)
            {
                printf("[%s - CODIGO %d - DISPONIVEL PARA COMPRA]\n",
                       produto[i],
                       codigo[i]);
            }
            else
            {
                printf("[%s - CODIGO %d - SEM ESTOQUE]\n",
                       produto[i],
                       codigo[i]);
            }
        }
    }

    // Nenhum produto cadastrado
    if (verificar == 0)
    {
        printf("\n[NENHUM PRODUTO FOI CADASTRADO]\n\n");
        return;
    }
    // Loop principal da compra
    while (1)
    {
        // Posicao do produto escolhido
        int indiceCompra = -1;
        printf("\nDIGITE O CODIGO DO PRODUTO QUE DESEJA COMPRAR: ");
        // Verifica a entrada
        if (scanf("%d", &codigoCompra) != 1)
        {
            Limparbuffer();
            printf("\n[CODIGO INVALIDO]\n");
            continue;
        }

        Limparbuffer();
        // Procura o produto pelo codigo
        for (int i = 0; i < 3; i++)
        {
            if (produto[i][0] != '\0' &&
                codigo[i] == codigoCompra)
            {
                indiceCompra = i;
                break;
            }
        }

        // Codigo nao encontrado
        if (indiceCompra == -1)
        {
            printf("\n[CODIGO NAO CADASTRADO]\n");
            continue;
        }
        // Mostra os dados do produto
        printf("\n\t--- COMPRA ---\n"
               "\t|CODIGO: %d\n"
               "\t|PRODUTO: %s\n"
               "\t|VALOR: %.2f\n"
               "\t|ESTOQUE: %d\n"
               "\t|VALOR TOTAL: %.2f\n"
               "\t-----------------\n",
               codigo[indiceCompra],
               produto[indiceCompra],
               valor[indiceCompra],
               estoque[indiceCompra],
               valor[indiceCompra] * estoque[indiceCompra]);
        // Verifica se existe estoque
        if (estoque[indiceCompra] > 0)
        {
            printf("\nQUANTAS UNIDADES DESEJA COMPRAR?\n");
            printf("[UNIDADES DISPONIVEIS: %d]\n",
                   estoque[indiceCompra]);
            // Valida a quantidade desejada
            while (1)
            {
                printf("QUANTIDADE: ");
                if (scanf("%d", &quantidade) != 1)
                {
                    Limparbuffer();
                    printf("\n[QUANTIDADE INVALIDA]\n\n");
                    continue;
                }
                Limparbuffer();
                // Nao aceita zero ou negativo
                if (quantidade <= 0)
                {
                    printf("\n[DIGITE UMA QUANTIDADE MAIOR QUE ZERO]\n\n");
                    continue;
                }
                // Nao permite comprar mais que o estoque
                if (quantidade > estoque[indiceCompra])
                {
                    printf("\n[QUANTIDADE INDISPONIVEL EM ESTOQUE]\n");
                    printf("[MAXIMO DISPONIVEL: %d]\n\n",
                           estoque[indiceCompra]);
                    continue;
                }
                break;
            }
            // Calcula quanto custa essa compra
            float subtotal = valor[indiceCompra] * quantidade;
            // Retira a quantidade vendida do estoque
            estoque[indiceCompra] = estoque[indiceCompra] - quantidade;
            // Armazena o codigo vendido
            codigoVenda[indiceCompra] = codigo[indiceCompra];
            // Acumula a quantidade caso o mesmo produto
            // seja comprado novamente
            quantidadeVenda[indiceCompra] = quantidadeVenda[indiceCompra] + quantidade;
            // Soma ao total geral
            totalCompra = totalCompra + subtotal;
            printf("\n[COMPRA REALIZADA COM SUCESSO]\n");
            printf("[SUBTOTAL: %.2f]\n",
                   subtotal);
            printf("[SALDO ATUALIZADO: %d]\n\n",
                   estoque[indiceCompra]);
        }
        else
        {
            printf("\n[NAO EXISTE QUANTIDADE EM ESTOQUE PARA COMPRA]\n\n");
        }
        // Pergunta se deseja comprar outro produto
        while (1)
        {
            printf("DESEJA REALIZAR OUTRA COMPRA?\n");
            printf("1 - SIM, 2 - NAO: ");
            // Valida a resposta
            if (scanf("%d", &resposta) != 1)
            {
                Limparbuffer();
                printf("\n[RESPOSTA INVALIDA]\n"
                       "[DIGITE 1 OU 2]\n\n");
                continue;
            }
            Limparbuffer();
            if (resposta == 1 ||
                resposta == 2)
            {
                break;
            }
            printf("\n[RESPOSTA INVALIDA]\n"
                   "[DIGITE 1 OU 2]\n\n");
        }
        // Usuario terminou as compras
        if (resposta == 2)
        {
            break;
        }
    }
    // -----------------------
    // RESUMO FINAL DA COMPRA
    // -----------------------
    printf("\n\t----- RESUMO DA COMPRA -----\n");
    // Nenhuma compra realizada
    if (totalCompra == 0.0f)
    {
        printf("\n[NENHUM PRODUTO FOI COMPRADO]\n\n");
        return;
    }

    printf("+---------------------+----------+------------+------------+--------------+\n"
           "| %-19s | %-8s | %-10s | %-10s | %-12s |\n"
           "+---------------------+----------+------------+------------+--------------+\n",
           "PRODUTO",
           "CODIGO",
           "QTD",
           "UNITARIO",
           "SUBTOTAL");
    // Mostra apenas os produtos comprados
    for (int i = 0; i < 3; i++)
    {
        if (quantidadeVenda[i] > 0)
        {
            printf("| %-19s | %-8d | %-10d | %-10.2f | %-12.2f |\n",
                   produto[i],
                   codigoVenda[i],
                   quantidadeVenda[i],
                   valor[i],
                   valor[i] * quantidadeVenda[i]);
        }
    }
    printf("+---------------------+----------+------------+------------+--------------+\n");
    // Valor total de todos os produtos comprados
    printf("\nTOTAL DA COMPRA: %.2f\n\n",
           totalCompra);
}

// ----------------------- ENCERRAMENTO -----------------------
// Funcao que informa ao main que o programa deve encerrar
void encerrar(int *identificar)
{
    *identificar = 1;
}

// ----------------------- LIMPEZA DO BUFFER -----------------------
// Limpa caracteres restantes no teclado
void Limparbuffer(void)
{
    int c;

    while ((c = getchar()) != '\n' &&
           c != EOF)
    {
    }
}