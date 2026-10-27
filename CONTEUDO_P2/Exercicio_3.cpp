#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int posicao, continua;    

struct Tbprodutos
{
	int codproduto;
	char nomeproduto[40];
	float valorproduto;
	int qtdproduto;
};

struct Tbprodutos produtos[10]; 

struct TbFicha  
{
  int codigo;
  char nome[40];
  char bairro[40];
  char cidade[60];     
  char telefone[15];
  char rg[15];
  char cpf[15];
} ;
//acima defini uma tipo estrutura chamada TbCliente
struct TbFicha ficha[10];
//criei uma matriz de estrutura, assim em cada posicao alimento os 4 atributos

void insereCliente()
{
	int c;
	
    printf("\nInforme um codigo para o cliente: ");
    scanf("%d", &ficha[posicao].codigo);
    while((c = getchar()) != '\n' && c != EOF );
    
    printf("Informe o nome do cliente: ");
    fgets(ficha[posicao].nome, 40, stdin);
    ficha[posicao].nome[strcspn(ficha[posicao].nome,"\n")] = '\0';
    
    printf("Informe o bairro do cliente: ");
    fgets(ficha[posicao].bairro, 40, stdin);
    ficha[posicao].bairro[strcspn(ficha[posicao].bairro,"\n")] = '\0';
    
    printf("Informe a cidade do cliente: ");
    fgets(ficha[posicao].cidade, 60, stdin);
    ficha[posicao].cidade[strcspn(ficha[posicao].cidade,"\n")] = '\0';
    
    printf("Informe o telefone: ");
	fgets(ficha[posicao].telefone, 15, stdin);
    ficha[posicao].telefone[strcspn(ficha[posicao].telefone,"\n")] = '\0';
    
    printf("Informe o rg do cliente: ");
    fgets(ficha[posicao].cpf, 15, stdin);
    ficha[posicao].cpf[strcspn(ficha[posicao].cpf,"\n")] = '\0';	
    
    printf("Informe o cpf do cliente: ");
    fgets(ficha[posicao].rg, 15, stdin);
    ficha[posicao].rg[strcspn(ficha[posicao].rg,"\n")] = '\0';
    
    //produtos
    printf("\nInforme os produtos\n\n"); 
	
	printf("Informe o codigo do produto: ");
    scanf("%d", &produtos[posicao].codproduto);
    while((c = getchar()) != '\n' && c != EOF );
    
    printf("Informe o nome do produto: ");
    fgets(produtos[posicao].nomeproduto, 40, stdin);
    produtos[posicao].nomeproduto[strcspn(produtos[posicao].nomeproduto,"\n")] = '\0';
    
    printf("Informe o valor do produto: ");
    scanf("%f", &produtos[posicao].valorproduto);
    
    printf("Informe a quantidade do produto: ");
    scanf("%d", &produtos[posicao].qtdproduto);
    
    
}


void exibeCliente()
{
  printf("\nNa posicao digitada estao as informacoes: \n");
  printf("-------------------------------------------\n\n");
  
  printf("%-25s |%d \n","Codigo:", ficha[posicao].codigo);
  
  printf("%-25s |%s \n", "Nome:",ficha[posicao].nome);
  
  printf("%-25s |%s \n","Bairro:", ficha[posicao].bairro);
  
  printf("%-25s |%s \n", "Cidade:",ficha[posicao].cidade);
  
  printf("%-25s |%s \n","O Telefone eh:",ficha[posicao].telefone);
  
  printf("%-25s |%s \n","O RG eh:",ficha[posicao].rg);
  
  printf("%-25s |%s \n","O CPF eh:",ficha[posicao].cpf);
  
  
  printf("%-25s |%d \n","Codigo do produto:",produtos[posicao].codproduto);
  
  printf("%-25s |%s \n","Nome do produto:", produtos[posicao].nomeproduto);
   
  printf("%-25s |%.2f \n","O Valor do produto eh:",produtos[posicao].valorproduto);
     
  printf("%-25s |%d \n","A quantidade do produto eh:",produtos[posicao].qtdproduto);
}


int main() 
{
	char nome[10];
  do
  {
    printf("Informe uma posicao para guardar o registro: ");
    scanf("%d", &posicao);       
    
    insereCliente();
    printf("\nInforme 1 para continuar 0 parar: ");
    scanf("%d",&continua);    
    system("cls");    
  }
  while (continua == 1);   
  system("cls");
  printf("Informe a posicao para busca \n");
  scanf("%d", &posicao);       
  exibeCliente();
  system("pause");    
}    

