#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define tamFrase 100

void inserirFrase(char frase[])
{
    printf("1)\n");
    printf("\n\t| - Insira uma frase: ");

    fgets(frase, tamFrase, stdin);

    frase[strcspn(frase, "\n")] = '\0';

    int cont = strlen(frase);

    for (int i = 0; i < cont; i++)
    {
        frase[i] = toupper(frase[i]);
    }

    printf("\t| - Frase: %s\n", frase);
}

void qtdCaracter(char frase[])
{
    int contar = strlen(frase);

    printf("\t| - Quantidade de caracter: %d\n", contar);
}

void qtdVogais(char frase[])
{
    int qtd = 0;
    int contar = strlen(frase);
    for (int i = 0; i < contar; i++)
    {
        if (frase[i] == 65 || frase[i] == 69 || frase[i] == 73 || frase[i] == 79 || frase[i] == 85)
        {
            qtd++;
        }
    }

    printf("\t| - Quantidade de vogais: %d\n", qtd);
}

void qtdConsoantes(char frase[])
{
  
    
        int qtd = 0;
        int contar = strlen(frase);

        for (int i = 0; i < contar; i++)
        {
            if (frase[i] == 65 || frase[i] == 69 || frase[i] == 73 ||
                frase[i] == 79 || frase[i] == 85)
            {
                continue;
            }
            else if (frase[i] >= 65 && frase[i] <= 90)
            {
                qtd++;
            }
        }

        printf("\t| - Quantidade de consoantes: %d\n", qtd);
    
}

void qtdPalavasTotal(char frase[])
{
    int qtd = 0;
    int contar = strlen(frase);
    for (int i = 0; i < contar; i++)
    {

        qtd++;
    }
    printf("\t| - Quantidade de palavras: %d\n", qtd);
}

void concatenaChuvaNao(char frase[])
{

    strcat(frase, " CHUVANAO");

    printf("\t| - Concatenada: %s\n", frase);
}

void substVogais(char frase[])
{

    int contar = strlen(frase);
    for (int i = 0; i < contar; i++)
    {
        if (frase[i] == 65 || frase[i] == 73)
        {
            frase[i] = 66;
        }
        else
        {
            if (frase[i] == 69 || frase[i] == 79 || frase[i] == 85)
            {
                frase[i] = '3';
            }
        }
    }
    // exibir frase alterada

    printf("\t| - Substituicao de vogais: %s\n", frase);
}

void cifrarVrase(char frase[])
{
    // para s, soma +3 para os 5 caracter, -5 para os outros asci
    // exibir frase
    int contar = strlen(frase);
    for (int i = 0; i < contar; i++)
    {
        if (i < 5)
        {
            frase[i] = frase[i] + 3;
        }
        else
        {
            frase[i] = frase[i] + 5;
        }
    }

    printf("\t| - Frase cifrada: %s", frase);
}

int main()
{

    char frase[tamFrase];
    inserirFrase(frase);
    qtdCaracter(frase);
    qtdVogais(frase);
    qtdConsoantes(frase);
    qtdPalavasTotal(frase);
    concatenaChuvaNao(frase);
    substVogais(frase);
    cifrarVrase(frase);

    return 0;
}