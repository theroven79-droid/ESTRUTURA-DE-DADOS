#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*Crie uma função onde o usuário digite um código e verifique se este código de
produto está cadastrado, se houver exiba o código o nome, valor do produto e a
quantidade em estoque; ok

Crie uma função onde o usuário digite o código de produto, se encontrar, informe
a quantidade de compra, caso contrário, avise para o usuário que a quantidade
não existe em estoque,

Se tiver no estoque, armazene o código e a quantidade em uma matriz (ou vetor)
de venda;
Pergunte se ele deseja inserir mais produtos;

 Caso o usuário não desejar mais realizar compras, exiba o nome de todos os
produtos comprados, suas respectivas quantidades e o total da compra.
*/

/*Crie um algoritmo para inserir “n” códigos de produtos, “n” nomes de produtos
e “n” valores de produtos.*/

void consulta(int estoque[], char produto[][20], float valor[]);
void compra(int estoque[], char produto[][20], float valor[]);
void Cestoque(int estoque[], int *volta);
void Cvalor(float valor[], int estoque[], int *volta);
void Ccodigo(int codigo[], float valor[], int estoque[], int *volta);
void Cprodutos(char produto[][20], int codigo[], float valor[], int estoque[], int *volta);
void Menu(int *identificar, char produto[][20], int codigo[], float valor[], int estoque[]);
void Pprodutos(char produto[][20], int codigo[], float valor[], int estoque[]);

void Limparbuffer();
void encerrar(int *identificar);

int main()
{
    setlocale(LC_ALL, "portuguese");

    char produto[3][20] = {0};
    int codigo[3] = {0};
    float valor[3] = {0.0};
    int estoque[3] = {0};
    int identificador = 0;

    while (1)
    {
        if (identificador == 0)
        {

            Menu(&identificador, produto, codigo, valor, estoque);
        }
        else
        {
            break;
        }
    }

    return 0;
}

void Cestoque(int estoque[], int *volta)
{
    if (*volta == 0)
    {
        *volta = 1;
        Limparbuffer();
        for (int i = 0; i < 3; i++)
        {
            if (estoque[i] == 0)
            {
                printf("QUANTIDADE[%d]: ", i + 1);
                scanf("%d", &estoque[i]);
                break;
            }
        }
    }
}

void Cvalor(float valor[], int estoque[], int *volta)
{
    if (*volta == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            if (valor[i] == 0)
            {
                printf("VALOR[%d]: ", i + 1);
                scanf("%f", &valor[i]);
                Cestoque(estoque, volta);
                break;
            }
        }
    }
}

void Ccodigo(int codigo[], float valor[], int estoque[], int *volta)
{
    if (*volta == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            if (codigo[i] == 0)
            {
                printf("CODIGO[%d]: ", i + 1);
                scanf("%d", &codigo[i]);
                Cvalor(valor, estoque, volta);
                break;
            }
        }
    }
}

void Cprodutos(char produto[][20], int codigo[], float valor[], int estoque[], int *volta)
{
    int verificador = 0;
    if (*volta == 0)
    {
        printf("\n");
        for (int v = 0; v < 3; v++)
        {
            if (produto[v][0] == '\0')
            {
                verificador = 0;
                printf("[PRODUTO %d SEM CADASTRO]\n", v + 1);
            }
            else
            {
                printf("[%s CADASTRADO]\n", produto[v]);
                verificador = 1;
            }
        }
        if (verificador == 1)
        {
            printf("\nTODOS OS PRODUTOS FORAM CADASTRADOS.\n");
        }
        else
        {
            printf("\n--- CADASTRO DE PRODUTOS --\n");
            for (int i = 0; i < 3; i++)
            {
                if (produto[i][0] == '\0')
                {
                    printf("PRODUTO %d: ", i + 1);
                    fgets(produto[i], sizeof(produto[i]), stdin);
                    produto[i][strcspn(produto[i], "\n")] = '\0';
                    for (int j = 0; produto[i][j] != '\0'; j++)
                    {
                        produto[i][j] = toupper(produto[i][j]);
                    }
                    Ccodigo(codigo, valor, estoque, volta);
                    break;
                }
            }
        }
    }
}

void Menu(int *identificar, char produto[][20], int codigo[], float valor[], int estoque[])
{

    int opcao;
    while (1)
    {
        int volta = 0;
        printf("\n----MENU INICIAL----\n\n");
        printf("1 - CADASTRAR PRODUTO\n");
        printf("2 - CONSULTAR ESTOQUE\n");
        printf("3 - COMPRAR PRODUTOS\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        while (getchar() != '\n')
            ;
        switch (opcao)
        {
        case 1:
            Cprodutos(produto, codigo, valor, estoque, &volta);
            Pprodutos(produto, codigo, valor, estoque);
            break;
        case 2:
            consulta(estoque, produto, valor);
            break;
        case 3:
            compra(estoque, produto, valor);
            break;
        case 4:
            encerrar(identificar);
            printf("\n\nFechando programa...\n\n");
            break;
        default:
            printf("\nerro.\n");
            break;
        }
        if (opcao == 4)
        {
            break;
        }
    }
}

void Limparbuffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void compra(int estoque[], char produto[][20], float valor[])
{
    int resposta;
    int consulta;
    int quantidade;
    int verificar = 0;
    printf("\n--- COMPRA DE PRODUTO ---\n");
    printf("\n[VERIFICANDO]...\n\n");
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            verificar++;
            printf("[%s DISPONIVEL PARA COMPRA]\n", produto[i]);
        }
    }
    if (verificar > 0)
    {
        while (1)
        {
            if (verificar != 1)
            {
                printf("\nQUAL PRODUTO QUER COMPRAR?\n");
                for (int i = 0; i < verificar; i++)
                {
                    printf("%d - %s\n", i + 1, produto[i]);
                }
                while (1)
                {
                    printf("PRODUTO: ");
                    scanf("%d", &consulta);
                    if (consulta <= 0 || consulta > verificar)
                    {
                        printf("\n[APENAS DE 1 A %d]\n", verificar);
                        continue;
                    }
                    break;
                }
            }
            else
            {
                printf("\nAPENAS 1 PRODUTO CADASTRADO NO MOMENTO\n");
            }
            printf("\n\t-- COMPRA --\n");
            printf("\t|PRODUTO: %s\n", produto[consulta - 1]);
            printf("\t|VALOR: %.2f\n", valor[consulta - 1]);
            printf("\t|ESTOQUE: %d\n", estoque[consulta - 1]);
            printf("\t------------");
            while (1)
            {
                if (estoque[consulta - 1] != 0)
                {
                    printf("\nQUANTAS UNIDADES DESEJA COMPRAR?\n");
                    printf("[UNIDADES DISPONIVEIS: %d]\n", estoque[consulta - 1]);
                    while (1)
                    {
                        printf("QUANTIDADE: ");
                        scanf("%d", &quantidade);
                        if (quantidade <= 0 || quantidade > estoque[consulta - 1])
                        {
                            printf("\nDIGITE UM VALOR VALIDO\n");
                            continue;
                        }
                        else
                        {

                            estoque[consulta - 1] = estoque[consulta - 1] - quantidade;
                            printf("\nSALDO ATUALIZADO.\n\n");
                            break;
                        }
                    }

                    printf("DESEJA ENCONTRAR OUTRO PRODUTO?\n");
                    printf("1 - sim, 2 - nao: ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    printf("\n[NÃO EXISTE QUANTIDADE EM ESTOQUE PARA COMPRA]\n");
                    printf("\nDESEJA ENCONTRAR OUTRO PRODUTO?\n");
                    printf("1 - sim, 2 - nao: ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                    {
                        continue;
                    }
                    break;
                }
                break;
            }
            break;
        }
    }
    else
    {
        printf("\n\nNENHUM PRODUTO FOI CADASTRADO.\n\n");
    }
}

void consulta(int estoque[], char produto[][20], float valor[])
{
    int consulta;
    int verificar = 0;
    printf("\n--- CONSULTA DE ESTOQUE ---\n");
    printf("\n[VERIFICANDO]...\n");
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            verificar++;
        }
    }

    if (verificar > 0)
    {

        printf("\n[%d PRODUTOS CADASTRADO ]\n", verificar);

        if (verificar == 1)
        {
            consulta = 1;
        }
        else
        {
            printf("PRODUTO CADASTRADO [1 A %d]\n", verificar);

            while (1)
            {

                if (verificar > 1)
                {
                    while (1)
                    {
                        printf("QUAL PRODUTO DESEJA CONSULTAR: ");
                        scanf("%d", &consulta);
                        if (consulta <= 0 || consulta > verificar)
                        {
                            printf("\n\nDIGITE UM VALOR VALIDO\n\n");
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                break;
            }
        }

        if (estoque[consulta - 1] != 0)
        {
            {
                printf("\t--- PRODUTO ---\n");
                printf("\t|PRODUTO: %s\n", produto[consulta - 1]);
                printf("\t|VALOR: %.2f\n", valor[consulta - 1]);
                printf("\t|ESTOQUE: %d\n", estoque[consulta - 1]);
                printf("\t-------------");
            }
        }
        else
        {
            printf("\nNAO EXISTE QUANTIDADE EM ESTOQUE.\n");
        }
    }

    else
    {
        printf("\n\nNENHUM PRODUTO FOI CADASTRADO.\n\n");
    }
}

void encerrar(int *identificar)
{
    *identificar = 1;
}
void Pprodutos(char produto[][20], int codigo[], float valor[], int estoque[])
{
    int qtd = 0;

    printf("\n\t----- TABELA DOS PRODUTOS -----\n");
    for (int i = 0; i < 3; i++)
    {
        if (produto[i][0] != '\0')
        {
            qtd++;
        }
    }
    printf("+---------------------+----------+------------+------------+\n");
    printf("| %-19s | %-8s | %-10s | %-10s |\n",
           "PRODUTO", "CODIGO", "VALOR", "QUANTIDADE");
    printf("+---------------------+----------+------------+------------+\n");

    for (int j = 0; j < qtd; j++)
    {
        printf("| %-19s | %-8d | %-10.2f | %-10d |\n",
               produto[j], codigo[j], valor[j], estoque[j]);
    }

    printf("+---------------------+----------+------------+------------+\n");
    printf("\n");
}
