#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastroVendas
{
  int id_codigo_ficha;
  char id_cliente[40];
  int id_codigo_produto;
  int quantidade_vendida;
  float total_venda;
};

struct Tbprodutos
{
  int codproduto;
  char nomeproduto[40];
  float valorproduto;
  int qtdproduto;
};

struct TbFicha
{
  int codigo_ficha;
  char nome[40];
  char bairro[40];
  char cidade[60];
  char telefone[15];
  char rg[15];
  char cpf[15];
};

struct TbFicha ficha[10];
struct Tbprodutos produtos[10];
struct cadastroVendas Vendas[100];

int totalClientes = 0;
int totalProdutos = 0;
int totalVendas = 0;

void listarClientes()
{
  printf("\n+--------+----------------------------------------+\n");
  printf("| CODIGO | CLIENTE                                |\n");
  printf("+--------+----------------------------------------+\n");
  for (int i = 0; i < totalClientes; i++)
  {
    printf("| %-6d | %-38s |\n", ficha[i].codigo_ficha, ficha[i].nome);
  }
  printf("+--------+----------------------------------------+\n");
}

void listarProdutos()
{
  printf("\n+--------+----------------------+-----------+---------+\n");
  printf("| CODIGO | PRODUTO              | PRECO R$  | ESTOQUE |\n");
  printf("+--------+----------------------+-----------+---------+\n");
  for (int i = 0; i < totalProdutos; i++)
  {
    printf("| %-6d | %-20.20s | %9.2f | %7d |\n",
           produtos[i].codproduto, produtos[i].nomeproduto,
           produtos[i].valorproduto, produtos[i].qtdproduto);
  }
  printf("+--------+----------------------+-----------+---------+\n");
}

void cadastrarCliente()
{
  if (totalClientes == 10)
  {
    printf("\nLimite de 10 clientes atingido!\n");
    return;
  }

  int i = totalClientes;
  printf("\n========== CADASTRO DE CLIENTE ==========\n");
  printf("Codigo do cliente: ");
  scanf("%d", &ficha[i].codigo_ficha);

  for (int j = 0; j < i; j++)
  {
    if (ficha[j].codigo_ficha == ficha[i].codigo_ficha)
    {
      printf("Este codigo ja esta cadastrado!\n");
      return;
    }
  }

  printf("Nome: ");
  scanf(" %39[^\n]", ficha[i].nome);
  printf("Bairro: ");
  scanf(" %39[^\n]", ficha[i].bairro);
  printf("Cidade: ");
  scanf(" %59[^\n]", ficha[i].cidade);
  printf("Telefone: ");
  scanf(" %14[^\n]", ficha[i].telefone);
  printf("RG: ");
  scanf(" %14[^\n]", ficha[i].rg);
  printf("CPF: ");
  scanf(" %14[^\n]", ficha[i].cpf);

  totalClientes++;
  printf("\nCliente cadastrado com sucesso!\n");
  listarClientes();
}

void cadastrarProduto()
{
  if (totalProdutos == 10)
  {
    printf("\nLimite de 10 produtos atingido!\n");
    return;
  }

  int i = totalProdutos;
  char entrada[30];
  printf("\n========== CADASTRO DE PRODUTO ==========\n");
  printf("Codigo do produto: ");
  scanf("%d", &produtos[i].codproduto);

  for (int j = 0; j < i; j++)
  {
    if (produtos[j].codproduto == produtos[i].codproduto)
    {
      printf("Este codigo ja esta cadastrado!\n");
      return;
    }
  }

  printf("Nome do produto: ");
  scanf(" %39[^\n]", produtos[i].nomeproduto);

  printf("Preco do produto (ex.: 12,50): ");
  scanf("%29s", entrada);
  for (int j = 0; entrada[j] != '\0'; j++)
  {
    if (entrada[j] == ',')
      entrada[j] = '.';
  }
  if (sscanf(entrada, "%f", &produtos[i].valorproduto) != 1 ||
      produtos[i].valorproduto <= 0)
  {
    printf("Preco invalido. Cadastro cancelado!\n");
    return;
  }

  printf("Quantidade em estoque: ");
  scanf("%d", &produtos[i].qtdproduto);
  if (produtos[i].qtdproduto < 0)
  {
    printf("Quantidade invalida. Cadastro cancelado!\n");
    return;
  }

  totalProdutos++;
  printf("\nProduto cadastrado com sucesso!\n");
  listarProdutos();
}

void realizarVenda()
{
  if (totalClientes == 0 || totalProdutos == 0)
  {
    printf("\nCadastre um cliente e um produto primeiro!\n");
    return;
  }
  if (totalVendas == 100)
  {
    printf("\nLimite de vendas atingido!\n");
    return;
  }

  printf("\n================ REALIZAR VENDA ================\n");
  printf("\nCLIENTES CADASTRADOS:");
  listarClientes();
  printf("\nPRODUTOS CADASTRADOS:");
  listarProdutos();

  int codigoCliente, codigoProduto, quantidade;
  int posCliente = -1, posProduto = -1;
  char confirmar;

  printf("\nCodigo do cliente: ");
  scanf("%d", &codigoCliente);
  for (int i = 0; i < totalClientes; i++)
  {
    if (ficha[i].codigo_ficha == codigoCliente)
      posCliente = i;
  }
  if (posCliente == -1)
  {
    printf("Cliente nao encontrado!\n");
    return;
  }

  printf("Codigo do produto: ");
  scanf("%d", &codigoProduto);
  for (int i = 0; i < totalProdutos; i++)
  {
    if (produtos[i].codproduto == codigoProduto)
      posProduto = i;
  }
  if (posProduto == -1)
  {
    printf("Produto nao encontrado!\n");
    return;
  }

  printf("Quantidade para vender: ");
  scanf("%d", &quantidade);
  if (quantidade <= 0 || quantidade > produtos[posProduto].qtdproduto)
  {
    printf("Quantidade invalida! Estoque disponivel: %d\n",
           produtos[posProduto].qtdproduto);
    return;
  }

  float total = quantidade * produtos[posProduto].valorproduto;
  printf("\n---------------- RESUMO ----------------\n");
  printf("Cliente: %s\n", ficha[posCliente].nome);
  printf("Produto: %s\n", produtos[posProduto].nomeproduto);
  printf("Quantidade: %d\n", quantidade);
  printf("Total: R$ %.2f\n", total);
  printf("Confirmar venda (S/N)? ");
  scanf(" %c", &confirmar);

  if (confirmar != 'S' && confirmar != 's')
  {
    printf("Venda cancelada.\n");
    return;
  }

  Vendas[totalVendas].id_codigo_ficha = codigoCliente;
  strcpy(Vendas[totalVendas].id_cliente, ficha[posCliente].nome);
  Vendas[totalVendas].id_codigo_produto = codigoProduto;
  Vendas[totalVendas].quantidade_vendida = quantidade;
  Vendas[totalVendas].total_venda = total;
  totalVendas++;

  produtos[posProduto].qtdproduto -= quantidade;
  printf("\nVENDA REALIZADA COM SUCESSO!\n");
  printf("Estoque restante de %s: %d\n",
         produtos[posProduto].nomeproduto,
         produtos[posProduto].qtdproduto);
}

int main()
{
  int op;
  do
  {
    printf("\n===========================================\n");
    printf("            SISTEMA DE VENDAS             \n");
    printf("===========================================\n");
    printf("  [1] Cadastrar cliente\n");
    printf("  [2] Cadastrar produto\n");
    printf("  [3] Realizar venda\n");
    printf("  [0] Sair\n");
    printf("-------------------------------------------\n");
    printf("Escolha uma opcao: ");
    if (scanf("%d", &op) != 1)
    {
      printf("Digite apenas numeros no menu.\n");
      break;
    }

    switch (op)
    {
    case 1:
      cadastrarCliente();
      break;
    case 2:
      cadastrarProduto();
      break;
    case 3:
      realizarVenda();
      break;
    case 0:
      printf("Programa encerrado.\n");
      break;
    default:
      printf("Opcao invalida!\n");
    }
  } while (op != 0);
  return 0;
}
