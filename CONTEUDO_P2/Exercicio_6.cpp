#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
struct registro
{
    char id[10];
    char nome[40];
    char rg[15];
    char cpf[15];
    char cidade[50];
    // id, rg, cpf e cidade.
    registro *ant;
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

int main()
{
    ponteiro ult, aux;
    char nomeb_[200];
    char id_[10];
    char rg_[15];
    char cpf_[15];
    char cidade_[50];
    int c;

    char resp = 'S';

    // inicializando a pilha
    ult = NULL;
    aux = NULL;

    while (toupper(resp) == 'S')
    {
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

        // crio uma novo registro com todos os atributos
        // eh como se tivesse criado uma linha na tabela
        strcpy(aux->nome, nomeb_);
        strcpy(aux->id, id_);
        strcpy(aux->rg, rg_);
        strcpy(aux->cpf, cpf_);
        strcpy(aux->cidade, cidade_);
        aux->ant = NULL;
        if (ult != NULL)
        {
            aux->ant = ult;
        }
        ult = aux;
        printf("\nInforme S para add, ou N para encerrar: ");
        scanf("%c", &resp);
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }
    aux = ult;
    exibe(ult);
    system("pause");
}
