#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
struct registro
{
    char id[20];
    char nome[200];
    char rg[20];
    char cpf[20];
    char cidade[200];
    // id, rg, cpf e cidade.
    registro *ant;
    registro *proximo;
    // armazenara o endereco de memoria onde esta a
    // estrutura anterior
};
// acima defini uma tipo estrutura chamada registro
typedef registro *ponteiro;

// defino um novo tipo, assim se for criado uma variavel do tipo ponteiro
// ele contera todos os campos da estrutura registro
void exibe(ponteiro u)
{
    ponteiro aux;
    aux = u;
    while (aux != NULL)
    {
        printf("%s", aux->id);
        printf("%s", aux->nome);
        printf("%s", aux->rg);
        printf("%s", aux->cpf);
        printf("%s", aux->cidade);
        printf("------------------------\n");

        aux = aux->ant;
    }
}

void exibe_proximo(ponteiro u)
{
    ponteiro aux;
    aux = u;
    while (aux != NULL)
    {
        printf("%s", aux->id);
        printf("%s", aux->nome);
        printf("%s", aux->rg);
        printf("%s", aux->cpf);
        printf("%s", aux->cidade);
        printf("------------------------\n");

        aux = aux->proximo;
    }
}

int main()
{
    ponteiro ult, aux, inicioFila, fichaAnterior;
    ;
    char nomeb_[200];
    char id_[20];
    char rg_[20];
    char cpf_[20];
    char cidade_[200];
    int c;

    char resp = 'S';

    // inicializando a pilha
    ult = NULL;
    aux = NULL;
    inicioFila = NULL;

    while (toupper(resp) == 'S')
    {

        // crio uma novo registro com todos os atributos
        // eh como se tivesse criado uma linha na tabela
        aux = new registro;
        printf("\nInforme o ID do cliente: ");
        strcpy(aux->id, fgets(id_, sizeof(id_), stdin));

        printf("Informe o NOME do cliente: ");
        strcpy(aux->nome, fgets(nomeb_, sizeof(nomeb_), stdin));

        printf("Informe o RG do cliente: ");
        strcpy(aux->rg, fgets(rg_, sizeof(rg_), stdin));

        printf("Informe o CPF do cliente: ");
        strcpy(aux->cpf, fgets(cpf_, sizeof(cpf_), stdin));

        printf("Informe a CIDADE do cliente: ");
        strcpy(aux->cidade, fgets(cidade_, sizeof(cidade_), stdin));

        aux->ant = NULL;

        if (ult != NULL)
        {
            aux->ant = ult;
        }
        ult = aux;

        aux->proximo = NULL;

        if (inicioFila == NULL)
        {
            inicioFila = aux;
        }

        else
        {
            fichaAnterior->proximo = aux;
        }

        fichaAnterior = aux;

        printf("\nInforme S para add, ou N para encerrar: ");
        scanf("%c", &resp);
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        printf("\n");
    }
    aux = ult;
    exibe(ult);
    printf("\n");
    exibe_proximo(inicioFila);

}
