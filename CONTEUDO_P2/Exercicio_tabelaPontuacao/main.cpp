#include "bibliotecas.h"
#include "cadastroTimes.h"
#include "desempate.h"
#include "ordenacaoPlacar.h"
#include "tabelaOrdenada.h"
#include "tabelaPontuacaoFinal.h"

char times[qtd][letras];
int golsTime[gols];
int pontuacao[pontos];

int main()
{
  setlocale(LC_ALL, "Portuguese");

  cadastroTimes(times, golsTime, pontuacao);
  ordena(pontuacao, times, golsTime);
  tabelaOrdenada(golsTime, times, pontuacao);
  desempate(golsTime, pontuacao, times);
  tabelaPontuacaoFinal(golsTime, times, pontuacao);
}