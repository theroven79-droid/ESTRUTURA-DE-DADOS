#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "variaveis.h"
#include "funcoes.h"

int main()
{
    setlocale(LC_ALL, "UTF-8");
    printf("infome o codigo: ");
    scanf("%d", &codigo);
    printf("informe o valor: ");
    scanf("%d", &valor);
    printf("%d, %d\n", codigo, valor);
    printf("\nsoma: %d", soma(10, 10));
    return 0;
}