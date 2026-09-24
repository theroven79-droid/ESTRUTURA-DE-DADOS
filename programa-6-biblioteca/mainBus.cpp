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

void resultadoCadastro(int *valorPassagem, int *quantidadeTotal,
                       int *quantidadeEspecial, int *valorMinimo);

void resultadoCadastro(int *valorPassagem, int *quantidadeTotal,
                       int *quantidadeEspecial, int *valorMinimo);

void compraPoltrona(int onibus[][tam], int *quantidadeTotal)
{
    int linha;
    int lugarDisponivel;
    int fileira;
    int poltrona;

    printf("\n\t[COMPRA DE PASSANGEM]\n");

    printf("\t| - SELECIONE A POLTRONA\n");

    printf("\t| - 0 -> Assento normal\n");
    printf("\t| - 1 -> Assento Especial\n");

    printf("\n\t --- [ONIBUS] ---\n");

    linha = (*quantidadeTotal + 3) / tam;

    for (int i = 0; i < linha; i++)
    {
        printf("\t");
        for (int j = 0; j < tam; j++)
        {
            printf("[%d] ", onibus[i][j]);
            if (tam == 1)
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    while (1)
    {
        printf("\n\t| - Selecione a fileira: (1 a %d) ", linha);
        scanf("%d", &fileira);

        if (fileira <= 0 || fileira > linha)
        {
            printf("\n\t| - não existe essa fileira.\n");
            continue;
        }

        break;
    }
    while (1)
    {
        printf("\n\t| - Selecione a Poltrona (1 a 4):  ");
        scanf("%d", &poltrona);

        if (poltrona <= 0 || poltrona > tam)
        {
            printf("\n\t| - não existe poltrona.\n");
            continue;
        }

        break;
    }
}

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
        printf("\n\t[MENU]\n");

        printf("\t|1 - Cadastro do onibus\n");

        printf("\t|2 - Exibir poltronas\n");

        printf("\t|3 - Comprar Passagem\n");

        printf("\t|0 - Sair\n");

        printf("\n\t| Opcao: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu)
        {
        case 1:
            cadastroOnibus(quantidadeTotal, quantidadeEspecial,
                           valorPassagem, valorMinimo);

            matrizOnibus(quantidadeTotal, quantidadeEspecial,
                         onibus);

            resultadoCadastro(valorPassagem, quantidadeTotal,
                              quantidadeEspecial, valorMinimo);
            break;
        case 2:
            imprimiOnibus(onibus, quantidadeTotal);
            break;
        case 3:

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
    printf("\n\t[CADASTRO DO ONIBUS]\n");

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
    int lugarComum;
    int linha;

    lugarComum = *quantidadeTotal - *quantidadeEspecial;

    linha = (*quantidadeTotal + 3) / tam;

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

    printf("\n\t ---[ONIBUS]---\n");

    for (int i = 0; i < linha; i++)
    {
        printf("\t");
        for (int j = 0; j < tam; j++)
        {
            printf("[%d] ", onibus[i][j]);
            if (tam == 1)
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

void resultadoCadastro(int *valorPassagem, int *quantidadeTotal,
                       int *quantidadeEspecial, int *valorMinimo)
{
    int disponiveisNormais;
    int disponiveisEspeciais;
    int valorTotal;

    printf("\n\t[INFORMACOES]\n");

    printf("\t| - Valor da passagem: R$%d\n", *valorPassagem);

    disponiveisNormais = *quantidadeTotal - *quantidadeEspecial;

    printf("\t| - Lugares normais disponiveis: %d\n", disponiveisNormais);

    disponiveisEspeciais = *quantidadeEspecial;

    printf("\t| - Lugares Especiais disponiveis: %d\n", disponiveisEspeciais);

    printf("\t| - Valor minimo para saida do onibus: R$%d\n", *valorMinimo);

    valorTotal = *quantidadeTotal * *valorPassagem;

    printf("\t| - Valor total esperado de lucro: R$%d\n", valorTotal);
}
