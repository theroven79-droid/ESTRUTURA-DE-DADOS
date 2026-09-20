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
void compra(int estoque[], char produto[][20], float valor[], int codigo[]);
void Cestoque(int estoque[], char produto[][20], int codigo[], float valor[]);
void Cvalor(float valor[], int estoque[], char produto[][20], int codigo[]);
void Ccodigo(int codigo[], float valor[], int estoque[], char produto[][20]);
void Cprodutos(char produto[][20], int codigo[], float valor[], int estoque[]);
void Menu(int *identificar, char produto[][20], int codigo[], float valor[], int estoque[]);
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

void Cestoque(int estoque[], char produto[][20], int codigo[], float valor[])
{
    int resposta_1;
    Limparbuffer();
    for (int i = 0; i < 3; i++)
    {
        if (estoque[i] == 0)
        {
            printf("QUANTIDADE: ");
            scanf("%d", &estoque[i]);
            break;
        }

        else
        {
            printf("\tQUANTIDADE DO PRODUTO %d JAh CADASTRADO\n", i + 1);
        }
    }
    printf("\nDESEJA CADASTRAR MAIS PRODUTOS?\n");
    printf("1 - sim, 2 - nao: ");
    scanf("%d", &resposta_1);
    if (resposta_1 == 1)
    {
        Cprodutos(produto, codigo, valor, estoque);
    }
}

void Cvalor(float valor[], int estoque[], char produto[][20], int codigo[])
{
    for (int i = 0; i < 3; i++)
    {
        if (valor[i] == 0)
        {
            printf("VALOR: ");
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
        if (produto[v][20] == '\0')
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

void Menu(int *identificar, char produto[][20], int codigo[], float valor[], int estoque[])
{

    int opcao;
    while (1)
    {
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
            consulta(estoque, produto, valor);
            break;
        case 3:
            compra(estoque, produto, valor, codigo);
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

void compra(int estoque[], char produto[][20], float valor[], int codigo[])
{
    int consulta;
    int quantidade;
    int verificar = 0;

    for (int i = 0; i < 3; i++)
    {
        if (estoque[i] == 0)
        {
            verificar++;
        }
    }
    if (verificar == 0)
    {
        printf("\n--- COMPRA DE PRODUTO ---\n");
        while (1)
        {
            printf("DIGITE O CODIGO DO PRODUTO [1 A 3]\n");
            printf("CODIGO: ");
            scanf("%d", &consulta);
            if (codigo[consulta] != 0)
            {
                printf("\n--- PRODUTO ENCONTRADO ---\n");
                printf("\t|PRODUTO: %s     |\n", produto[consulta]);
                printf("\t|VALOR: %2.f     |\n", valor[consulta]);
                printf("\t|ESTOQUE: %d\tun |\n", estoque[consulta]);
                printf("\t------------");
                printf("\nQUANTAS UNIDADES DESEJA COMPRAR?\n");

                while (1)
                {
                    printf("QUANTIDADE: ");
                    scanf("%d", &quantidade);
                    if (quantidade == 0 && quantidade > estoque[consulta])
                    {
                        printf("\nDIGITE UM VALOR VALIDO\n");
                        continue;
                    }
                    else
                    {
                        estoque[consulta] = estoque[consulta] - quantidade;
                        break;
                    }
                }
            }
            else
            {
                int resposta;
                printf("\nNAO EXISTE QUANTIDADE EM ESTOQUE.\n");
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

    for (int i = 0; i < 3; i++)
    {
        if (estoque[i] == 0)
        {
            verificar++;
        }
    }
    if (verificar == 0)
    {
        printf("\n--- CONSULTA DE ESTOQUE ---\n");
        printf("DIGITE O CODIGO DO ITEM [1 A 3]");
        while (1)
        {
            printf("CODIGO: ");
            scanf("%d", &consulta);
            if (estoque[consulta] != 0)
            {
                if (consulta >= 1 && consulta <= 3)
                {
                    printf("\n--- PRODUTO ENCONTRADO ---\n");
                    printf("\t|PRODUTO: %s |\n", produto[consulta - 1]);
                    printf("\t|VALOR: %2.f |\n", valor[consulta - 1]);
                    printf("\t|ESTOQUE: %d |\n", estoque[consulta - 1]);
                    printf("\t------------");
                    break;
                }
                else if (consulta <= 0 && consulta > 3)
                {
                    printf("\nVALOR INVALIDO.\n");
                    continue;
                }
            }
            else
            {
                printf("\nNAO EXISTE QUANTIDADE EM ESTOQUE.\n");
            }
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
