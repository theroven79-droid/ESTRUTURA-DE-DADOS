#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "util-prog-1.h"

void fnumeros(float *n1, float *n2);

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n1, n2;
    fnumeros(&n1, &n2);
    printf("Resultado soma: %.2f\n", soma(n1, n2));
    printf("Resultado subtracao: %.2f\n", subtracao(n1, n2));
    printf("Resultado multiplicação: %.2f\n", multiplicacao(n1, n2));
    printf("Resultado divisão: %.2f\n", divisao(n1, n2));

    return 0;
}

void fnumeros(float *n1, float *n2)
{
    printf("Digite 2 numeros, para ter os resultados\n");
    printf("Numero 1: ");
    scanf("%f", n1);
    printf("Numero 2: ");
    scanf("%f", n2);
}