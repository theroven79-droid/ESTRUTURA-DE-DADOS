#include <stdio.h>
#include <stdlib.h>

int main(){


    int *ponteiro;
    int num01,num02;

    printf("Informe um numero: ");
    scanf("%d", &num01);

    printf("Numero digitado: %d\n",num01);

    ponteiro = &num01;

    num02 = *ponteiro;

    printf("Numero copiado para variavel num02: %d\n", num02);
    printf("Endereco da variavel num01: %d\n", &num01);
    printf("conteudo da variavel num01: %d\n", num01);
    printf("Endereco da variavel num02: %d\n", &num02);
    printf("Conteudo da variavel num02: %d\n", num02);
    printf("Endereço do ponteiro %d\n", &ponteiro);
    printf("Variavel ponteiro: %d", ponteiro);

    return 0;

}