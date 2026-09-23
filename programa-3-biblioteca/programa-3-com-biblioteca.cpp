#include "funcoes.h"
// ----------------------- MAIN -----------------------
int main()
{
    // Define a localizacao para permitir acentos no terminal
    setlocale(LC_ALL, "UTF-8");
    // Loop principal
    while (1)
    {
        if (identificador == 0)
        {
            // Abre o menu principal
            Menu(&identificador, produto, codigo, valor, estoque);
        }
        else
        {
            // Encerra o programa
            break;
        }
    }
    return 0;
}