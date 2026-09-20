#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*Crie uma função onde o usuário digite um código e verifique se este código de
produto está cadastrado, se houver exiba o código o nome, valor do produto e a
quantidade em estoque;

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

void Cestoque(int estoque[], char produto[][20], int codigo[], float valor[]);
void Cvalor(float valor[], int estoque[], char produto[][20], int codigo[]);
void Ccodigo(int codigo[], float valor[], int estoque[], char produto[][20]);
void Cprodutos(char produto[][20], int codigo[], float valor[], int estoque[]);
void Menu(char produto[][20], int codigo[], float valor[], int estoque[]);
void Limparbuffer(void);

int main()
{
    setlocale(LC_ALL, "portuguese");

    char produto[3][20] = {0};
    int codigo[3] = {0};
    float valor[3] = {0.0};
    int estoque[3] = {0};

    Menu(produto, codigo, valor, estoque);

    return 0;
}

void Cestoque(int estoque[], char produto[][20], int codigo[], float valor[])
{

    for (int i = 0; i < 3; i++)
    {
        if (estoque[i] == 0)
        {
            printf("QUANTIDADE %d: ", i + 1);
            scanf("%d", &estoque[i]);
            Cprodutos(produto, codigo, valor, estoque);
        }
        else
        {
            printf("\tQUANTIDADE DO PRODUTO %d JAh CADASTRADO\n", i + 1);
        }
    }
}

void Cvalor(float valor[], int estoque[], char produto[][20], int codigo[])
{
    for (int i = 0; i < 3; i++)
    {
        if (valor[i] == 0)
        {
            printf("VALOR %d: ", i + 1);
            scanf("%f", &valor[i]);
            Cestoque(estoque, produto, codigo, valor);
        }
        else
        {
            printf("\tVALOR PARA O PRODUTO %d JAh CADASTRADO\n", i + 1);
        }
    }
}

void Ccodigo(int codigo[], float valor[], int estoque[], char produto[][20])
{

    for (int i = 0; i < 3; i++)
    {
        if (codigo[i] == 0)
        {
            printf("CODIGO: ");
            scanf("%d", &codigo[i]);
            Cvalor(valor, estoque, produto, codigo);
        }
        else
        {
            printf("\tCODIGO DO PRODUTO %d JAh CADASTRADO\n", i + 1);
        }
    }
}

void Cprodutos(char produto[][20], int codigo[], float valor[], int estoque[])
{

    int verificador = 0;

    for (int v = 0; v < 3; v++)
    {
        if (produto[v][0] == '\0')
        {
            break;
        }
        else
        {
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
                void limparBuffer(void);
                Ccodigo(codigo, valor, estoque, produto);
            }
            else
            {
                printf("PRODUTO %d JAH CADASTRADO\n", i + 1);
            }
        }
    }
}

void Menu(char produto[][20], int codigo[], float valor[], int estoque[])
{

    int opcao;
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
        Cprodutos(produto, codigo, valor, estoque);

        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;

    default:
        printf("\n\nFechando programa...\n\n");
        break;
    }
}

void LimparBuffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}
