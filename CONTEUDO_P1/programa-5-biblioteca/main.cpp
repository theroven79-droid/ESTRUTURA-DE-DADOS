#include "bibliotecas.h"
//codigo com biblioteca.
int main()
{
    int a, b; 

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\n\t|SOMA: %d\n", soma(a, b));
    printf("\t|SUBTRACAO: %d\n", subtracao(a, b));
    printf("\t|MULTIPLICACAO: %d\n", multiplicacao(a, b));
    printf("\t|DIVISAO: %.2f\n", divisao(a, b));
    printf("\t|CUBO: %d\n", cubo(a, b));

    return 0;
}