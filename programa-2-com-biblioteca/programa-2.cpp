#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//prototipo das funções
int soma(int n1, int n2);
int multiplicacao(int result, int n3);
int cubo(int cubo);

int main()
{
    setlocale(LC_ALL, "portuguese");

    //declaração das variaveis
    int n1, n2, n3, f1_resultado, f2_resultado,f3_resultado;

    //input de 3 valores para as variaveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o Terceiro numero: ");
    scanf("%d", &n3);
    
    //processamento com as funções e a saida dos resultados atribuidas as variaveis
    f1_resultado = soma(n1, n2);
    f2_resultado = multiplicacao(n3, f1_resultado);
    f3_resultado = cubo(f2_resultado);
    
    //resultado dos processamento
    printf("\n\t---RESULTADO DO PROCESSAMENTO DOS DADOS---\n");
    printf("\tResultado 1: %d\n", f1_resultado);
    printf("\tResultado 2: %d\n", f2_resultado);
    printf("\tResultado 3: %d\n", f3_resultado);

    //encerra o algoritmo na memoria
    return 0;
}

//fução retorna a soma de 2 numeros
int soma(int n1, int n2)
{
    return n1 + n2 + 10;
}

//função retorna uma soma + multiplicação 
int multiplicacao(int result, int n3)
{
    return (n3 + result) * 3;
}

//função retorna valor ao cubo
int cubo(int cubo)
{
    return cubo * cubo * cubo;
}