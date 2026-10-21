#include "bibliotecas.h"

void ordena(int pontuacao[], char times[][letras], int golsTime[])
{
    int aux;
    char aux2[letras];
    int aux3;

    for (int i = 0; i < qtd - 1; i++)
    {
        for (int j = 0; j < qtd - 1 - i; j++)
        {
            if (pontuacao[j] < pontuacao[j + 1])
            {
                aux = pontuacao[j];
                pontuacao[j] = pontuacao[j + 1];
                pontuacao[j + 1] = aux;

                strcpy(aux2, times[j]);
                strcpy(times[j], times[j + 1]);
                strcpy(times[j + 1], aux2);

                aux3 = golsTime[j];
                golsTime[j] = golsTime[j + 1];
                golsTime[j + 1] = aux3;
            }
        }
    }
}
