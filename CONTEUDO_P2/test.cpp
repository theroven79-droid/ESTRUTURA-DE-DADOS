#include <stdio.h>

int test(int *numero_funcao){

    
    *numero_funcao = 5;

    return *numero_funcao;
}

int main(){


int numero;

printf("digite um numero: ");
scanf("%d", &numero);

test(&numero);

printf("numero %d\n", numero);

}