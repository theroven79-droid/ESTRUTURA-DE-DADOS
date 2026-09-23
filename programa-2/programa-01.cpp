#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void FUNCAO_OPCAO();
void TABUADA_COMPLETA();
void TABUADA_AO_CUBO();

int main()
{
    setlocale(LC_ALL, "portuguese");
    FUNCAO_OPCAO();
    return 0;
}

void FUNCAO_OPCAO()
{
    int op;
    printf("\tSELECIONE A OPÇÃO\n");
    printf("\t1 - tabuada 1 ao 10\n");
    printf("\t2 - tabuada 1 ao 10 ao cubo\n");
    printf("\tOpção: ");
    scanf("%d", &op);
    if (op == 1)
    {
        TABUADA_COMPLETA();
    }
    else if (op == 2)
    {
        TABUADA_AO_CUBO();
    }
    else
    {
        printf("\nNenhuma opção aceita\n");
    }
}

void TABUADA_COMPLETA()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nTabuada do %d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("%d * %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1));
        }
        printf("------------------\n");
    }
    printf("\n FIM \n");
}
void TABUADA_AO_CUBO()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nTabuada ao cubo %d\n", i);

        for (int j = 0; j < 10; j++)
        {
            int resultado;
            resultado = (i + 1) * (j + 1);
            resultado = resultado * resultado * resultado;
            printf("%d * %d = %d\n", i + 1, j + 1, resultado);
        }
        printf("------------------\n");
    }
    printf("\n FIM \n");
}
