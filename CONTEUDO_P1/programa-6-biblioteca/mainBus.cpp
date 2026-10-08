#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"



int main()
{
    int quantidadeTotalOnibus,
        quantidadeEspecial,
        valorPassagem,
        valorMinimo,

        onibus[maxLinhas][tam];

    menuPrincipal(
        &quantidadeTotalOnibus,
        &quantidadeEspecial,
        &valorPassagem,
        &valorMinimo,
        onibus);

    return 0;
}

