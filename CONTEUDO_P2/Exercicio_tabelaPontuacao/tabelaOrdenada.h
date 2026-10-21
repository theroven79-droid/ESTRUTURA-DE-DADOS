#include "bibliotecas.h"

void tabelaOrdenada(int golsTime[], char times[][letras], int pontuacao[])
{
    printf("\n- Tabela dos times ordenada por pontuacao -\n");
    printf("\n\t|%-5s |%-20s |%-10s |%-10s\n", "POS", "TIME", "GOLS", "PONTUACAO");
    printf("\t%-45s", "----------------------------------------------------\n");
    for (int j = 0; j < qtd; j++)
    {
        printf("\t|%-5d |%-20s |%-10d |%-10d\n", j + 1, times[j], golsTime[j], pontuacao[j]);
        printf("\t%-45s", "----------------------------------------------------\n");
    }
}