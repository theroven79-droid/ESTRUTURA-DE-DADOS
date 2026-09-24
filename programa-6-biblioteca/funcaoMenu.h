

void menuPrincipal()
{
    int opcaoMenuPrincipal;
    printf("\t\n[Menu]\n\n");
    printf("\t|1 - Definir; Lugars, Especiais, Valor, Valor minimo\n");
    printf("\t|2 - Mostrar Lugares no onibus\n");
    printf("\t|3 - Venda de passagens\n");
    printf("\nOpcao: ");
    scanf("%d", &opcaoMenuPrincipal);
    switch (opcaoMenuPrincipal)
    {
    case 1:

        break;
    case 2:
        cadastroBus();
        break;
    case 3:
        exibirLugares();
        break;
    case 4:

        break;

    default:
        break;
    }
}
