#include <stdio.h>

typedef struct no
{
    int valor;
    no *esquerda;
    no *direita;
} no;

no *criarNo(int valor)
{
    no *novo = new no;
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

no *inserir(no *raiz, int valor)
{
   
    if (raiz == NULL)
    {
        return criarNo(valor);
     
    }

    if (valor <= raiz->valor)
    {

        raiz->esquerda = inserir(raiz->esquerda, valor);
    }

    else
    {
        raiz->direita = inserir(raiz->direita, valor);
    }

    return raiz;
}

void excluir(no *raiz)
{

    if (raiz != NULL)
    {
        excluir(raiz->esquerda);
        excluir(raiz->direita);
        delete raiz;
    }
}

void exibir(no *raiz)
{
    if (raiz != NULL)
    {
        exibir(raiz->esquerda);
        printf("%d", raiz->valor);
        exibir(raiz->direita);
    }
}


int main()
{
    no *raiz = NULL;
    int numero, opc = 1, verificar = 1;

    while (opc != 0)
    {
        if (verificar == 1)
        {
            printf("Digite o valor da RAIZ: ");
            scanf("%d", &numero);
            verificar = 0;
        }
        else
        {
            printf("Insira novos registros da Arvore: ");
            scanf("%d", &numero);
        }

        raiz = inserir(raiz, numero);

        printf("Deseja continuar: 1 - sim, 0 - nao: ");
        scanf("%d", &opc);
    }

    exibir(raiz);
    excluir(raiz);

    return 0;
}