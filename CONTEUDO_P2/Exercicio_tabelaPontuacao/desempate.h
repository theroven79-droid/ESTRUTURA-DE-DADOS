#include "bibliotecas.h"

void desempate(int golsTime[], int pontuacao[], char times[][letras])
{
    int aux;
    int aux2;
    char aux3[letras];
    for (int i = 0; i < qtd - 1; i++)
    {
        for (int j = 0; j < qtd - 1 - i; j++)
        {
            if (pontuacao[j] == pontuacao[j + 1] &&
                golsTime[j] < golsTime[j + 1])
            {
                aux = golsTime[j];
                golsTime[j] = golsTime[j + 1];
                golsTime[j + 1] = aux;

                aux2 = pontuacao[j];
                pontuacao[j] = pontuacao[j + 1];
                pontuacao[j + 1] = aux2;

                strcpy(aux3, times[j]);
                strcpy(times[j], times[j + 1]);
                strcpy(times[j + 1], aux3);
            }
        }
    }
}