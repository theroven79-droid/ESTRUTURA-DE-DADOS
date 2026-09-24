#define tam 4
void cadastroBus()
{

    int linhas;
    int lugares;
    int lugar = 1;
    int lugaresEspeciais;
    int valorDaPassagem;
    int valorMinimoDePartida;

    printf("\n\t[Cadastro]\n\n");

    printf("\t| - Lugares no onibus:");
    scanf("%d", &lugares);
    linhas = (lugares + 3) / tam;
    int lugaresTotal[linhas][tam];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (lugar <= lugares)
            {
                lugaresTotal[i][j] = lugar;
                lugar++;
            }
            else
            {
                lugaresTotal[i][j] = -1;
            }
        }
    }
    printf("\t| - Lugares idosos: ");
    scanf("%d", &lugaresEspeciais);
    printf("\t| - Valor da passagem: ");
    scanf("%d", &valorDaPassagem);
    printf("\t| - Valor minimo de partida: ");
    scanf("%d", &valorMinimoDePartida);
}
