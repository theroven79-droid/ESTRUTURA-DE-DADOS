#include <stdio.h>
#include <stdlib.h>

#define tam 4
#define maxLinhas 100

void menuPrincipal(int *quantidadeTotal, int *quantidadeEspecial,
                   int *valorPassagem, int *valorMinimo,
                   int onibus[][tam]);

void cadastroOnibus(int *quantidadeTotal, int *quantidadeEspecial,
                    int *valorPassagem, int *valorMinimo);

void matrizOnibus(int *quantidadeTotal, int *quantidadeEspecial,
                  int onibus[][tam]);

void imprimiOnibus(int onibus[][tam],
                   int *quantidadeTotal);

int main()
{

    int
        quantidadeTotalOnibus,
        quantidadeEspecial,
        valorPassagem,
        valorMinimo,

        onibus[maxLinhas][tam];

    menuPrincipal(
        &quantidadeTotalOnibus,
        &quantidadeEspecial,
        &valorPassagem,
        &valorMinimo,
        onibus);
}

void menuPrincipal(int *quantidadeTotal, int *quantidadeEspecial,
                   int *valorPassagem, int *valorMinimo,
                   int onibus[][tam])
{

    int opcaoMenu;
    while (1)
    {
        printf("\t--- [MENU] ---\n\n");
        printf("\t|1 - Cadastro do onibus\n");
        printf("\t|2 - Exibir poltronas\n");
        printf("\t|3 - Comprar Passagem\n");
        printf("\t|0 - Sair\n");
        printf("\n\t - Opcao: ");
        scanf("%d", &opcaoMenu);
        switch (opcaoMenu)
        {
        case 1:
            cadastroOnibus(quantidadeTotal, quantidadeEspecial,
                           valorPassagem, valorMinimo);
            matrizOnibus(quantidadeTotal, quantidadeEspecial,
                         onibus);
            break;
        case 2:
            imprimiOnibus(onibus, quantidadeTotal);
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;

        default:
            break;
        }
    }
}

void cadastroOnibus(int *quantidadeTotal, int *quantidadeEspecial,
                    int *valorPassagem, int *valorMinimo)
{
    printf("\n\t--- CADASTRO DO ONIBUS]--- \n\n");

    printf("\t|- Quantidade total de lugares: ");
    scanf("%d", quantidadeTotal);

    printf("\t|- Quantidade de lugares especiais: ");
    scanf("%d", quantidadeEspecial);

    printf("\t|- Valor da passagem: ");
    scanf("%d", valorPassagem);

    printf("\t|- Valor minimo de partida: ");
    scanf("%d", valorMinimo);
    printf("\n");
}

void matrizOnibus(int *quantidadeTotal, int *quantidadeEspecial,
                  int onibus[][tam])
{
    int lugar = 1;
    int lugarComum = *quantidadeTotal - *quantidadeEspecial;
    int linha = (*quantidadeTotal + 3) / tam;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (lugar <= lugarComum)
            {
                onibus[i][j] = 0;
            }
            else if (lugar <= *quantidadeTotal)
            {
                onibus[i][j] = 1;
            }
            else
            {
                onibus[i][j] = -1;
            }
            lugar++;
        }
    }
}

void imprimiOnibus(int onibus[][tam],
                   int *quantidadeTotal)
{

    int linha = (*quantidadeTotal + 3) / tam;
    printf("\n\t--- [ONIBUS] ---\n");

    for (int i = 0; i < linha; i++)
    {
        printf("\t");
        for (int j = 0; j < tam; j++)
        {
            printf("[%d] ", onibus[i][j]);
            if (tam == 1)
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
