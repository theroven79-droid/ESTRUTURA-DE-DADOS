#include "bibliotecas.h"

void cadastroTimes(char times[][letras], int golsTime[], int pontuacao[])
{
    printf("\n- Cadastrar nome de 12 times -");
    printf("\n- Cadastrar Gols de cada time -");
    printf("\n- Cadastrar pontuacao de cada time -\n\n");

    printf("\n- %d Times para cadastro - \n\n", qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("Time %d: ", i + 1);
        fgets(times[i], sizeof(times[i]), stdin);
        times[i][strcspn(times[i], "\n")] = '\0';

        printf("Gols: ");
        scanf("%d", &golsTime[i]);

        printf("Pontuacao: ");
        scanf("%d", &pontuacao[i]);
        printf("\n");
        getchar();
    }

    printf("\n- Tabela dos times -\n");
    printf("\n\t|%-5s |%-20s |%-10s |%-10s\n", "POS", "TIME", "GOLS", "PONTUACAO");
    printf("\t%-45s", "----------------------------------------------\n");

    for (int j = 0; j < qtd; j++)
    {
        printf("\t|%-5d |%-20s |%-10d |%-10d\n", j + 1, times[j], golsTime[j], pontuacao[j]);
        printf("\t%-45s", "----------------------------------------------\n");
    }

    printf("\n");
    system("pause");
    system("cls");
}