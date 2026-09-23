#include "bibliotecas.h"

int main()
{
    int a, b;
    a = 30;
    b = 20;

    printf("\t|SOMA: %d\n", soma(a, b));
    printf("\t|SUBTRACAO: %d\n", subtracao(a, b));
    printf("\t|MULTIPLICACAO: %d\n", multiplicacao(a, b));
    printf("\t|DIVISAO: %.2f\n", divisao(a, b));
    printf("\t|CUBO: %d\n", cubo(a, b));
}