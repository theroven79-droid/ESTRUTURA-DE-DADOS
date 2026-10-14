#include <stdio.h>
#include <stdlib.h>

#define tam 10

void insereNum(int num[])
{

  printf("preencha o vetor\n");

  for (int i = 0; i < tam; i++)
  {
    printf("\t| - NumIndice[%d]: ", i);
    scanf("%d", &num[i]);
  }
}

void motraAntesOrdena(int num[])
{

  printf("\n\t|- Desordenado\n\n");
  for (int i = 0; i < tam; i++)
  {
    printf("\t| - NumPosicao[%d]\n",num[i]);
  }
}

void ordenaVet(int num[])
{
  {
    int troca;
    int qtdTrocas = 0;
    int valida = 0;

    do
    {
      valida = false;
      for (int i = 0; i < tam - 1; i++)
      {
        if (num[i] > num[i + 1])
        {
          qtdTrocas++;
          troca = num[i];
          num[i] = num[i + 1];
          num[i + 1] = troca;
          valida = 1;
        }
      }
    } while (valida == 1);
    printf("\n Qtd de trocas %i", qtdTrocas);
  }
}

void mostraDespoisOrdena(int num[])
{
  printf("\n\t|- Ordenado\n\n");
  for (int i = 0; i < tam; i++)
  {
    printf("\t| - NumPosicao[%d]\n",num[i]);
  }
}

void busca(int buscaNum, int numero[])
{
  bool achou = false;
  int inicio, meio, fim;

  inicio = 0;
  fim = 10 - 1; // final do vetor menos 1 porque a posicao no c comeca no zero
  meio = (inicio + fim) / 2;
  while (inicio <= fim && achou == false)
  {
    meio = (inicio + fim) / 2;
    if (buscaNum > numero[meio])
    {
      inicio = meio + 1;
    }
    else if (buscaNum < numero[meio])
    {
      fim = meio - 1;
    }
    else
    {
      achou = true;
    }
  }
  printf("Meio %i\n", meio);
  printf("Inicio %i\n", inicio);
  printf("Fim %i\n", fim);

  if (achou == true)
  {
    printf("\n ***Informacao encontrada na posicao*** %i\n ", meio);
  }
  else
  {
    printf("\n ***Informacao nao encontrada *** \n ");
  }
}

int main()
{

  int numero[tam];
  int num;
  insereNum(numero);
  motraAntesOrdena(numero);
  ordenaVet(numero);
  mostraDespoisOrdena(numero);
  printf("Informe um numero: ");
  scanf("%i", &num);
  busca(num, numero);

  return 0;
}