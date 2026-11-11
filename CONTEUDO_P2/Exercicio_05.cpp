#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

void Limparbuffer(void)
{
  int c;

  while ((c = getchar()) != '\n' &&
         c != EOF)
  {
  }
}

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

    printf("Nome do cliente: %s\n", aux->nome);
    printf("Codigo do cliente: %d\n", aux->codigo_ficha);
    printf("CPF do cliente: %s\n", aux->cpf);
    printf("RG do cliente: %s\n", aux->rg);
    printf("------------------------------------\n\n");
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
    fgets(cliente, sizeof(cliente), stdin);
    cliente[strcspn(cliente, "\n")] = '\0';

    printf("Informe o codigo do cliente: ");
    scanf("%d", &cod_ficha);

    Limparbuffer();

    printf("Informe cpf: ");
    fgets(cpf_cliente, sizeof(cpf_cliente), stdin);
    cpf_cliente[strcspn(cpf_cliente, "\n")] = '\0';

    printf("Informe rg: ");
    fgets(rg_cliente, sizeof(rg_cliente), stdin);
    rg_cliente[strcspn(rg_cliente, "\n")] = '\0';


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

    printf("\nInforme S para cadastrar mais, E para encerrar: ");
    scanf("%s", &resp);
  }

  printf("\n");
  Exibe(inicioFila);
}
