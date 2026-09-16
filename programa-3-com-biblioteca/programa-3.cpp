#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int codigo, estoque;
    float valor;
    char produto[15][5];
    int i;

    // passar para função
    printf("--NOME DOS PRODUTOS--\n");
    for (i=0; i < 5; i++)
    {
        printf("Produto %d\n", i + 1);
        fgets(produto[i], sizeof(produto), stdin);
        produto[i][strcspn(produto[i], "\n")] = '\0';
    }

    return 0;
}