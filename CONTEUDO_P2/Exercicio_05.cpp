#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ficha
{
  int codigo_ficha;
  char nome[40];
  char rg[15];
  char cpf[15];
  ficha *proximo;
  // armazenara o endereco de memoria onde estara a
  // apontando para a ficha anterior
  // para estrutura que nos criamos
  // o asterisco deve ser colocado do lado direito
};
// acima defini uma tipo estrutura chamada ficha

typedef ficha *endmem;
// defino um novo tipo, assim se for criado uma variavel do tipo ficha
// ele contera todos os campos da estrutura ficha

void Exibe(endmem primeiro)
{
  endmem aux;

  aux = primeiro;

  while (aux != NULL)
  {
    printf("nome cliente: %s\n", aux->nome);
    printf("codigo cliente: %d\n", aux->codigo_ficha);
    printf("cpf do cliente: %s\n", aux->cpf);
    printf("RG do cliente: %s\n", aux->rg);
    aux = aux->proximo;
  }
}

main()
{
  endmem inicioFila, fichaAnterior, auxiliarFicha;

  char cliente[40];
  int cod_ficha;
  char rg_cliente[15];
  char cpf_cliente[15];
  char resp = 'S';

  // inicializando a fila
  inicioFila = NULL;

  while (resp == 'S')
  {
    printf("\nInforme o nome do cliente: ");
    scanf(" %50s", cliente);

    printf("\nInforme o codigo do cliente: ");
    scanf("%d", &cod_ficha);

    printf("\nInforme cpf: ");
    scanf(" %15s", rg_cliente);

    printf("\nInforme rg: ");
    scanf(" %15s", cpf_cliente);

    auxiliarFicha = new ficha;

    strcpy(auxiliarFicha->nome, cliente);
    strcpy(auxiliarFicha->rg, rg_cliente);
    strcpy(auxiliarFicha->cpf, cpf_cliente);
    auxiliarFicha->codigo_ficha = cod_ficha;

    auxiliarFicha->proximo = NULL;

    if (inicioFila == NULL)
    {
      inicioFila = auxiliarFicha;
    }

    else
    {
      fichaAnterior->proximo = auxiliarFicha;
    }

    fichaAnterior = auxiliarFicha;

    printf("Informe S para continuar \n ");
    scanf("%s", &resp);
  }

  Exibe(inicioFila);
}
