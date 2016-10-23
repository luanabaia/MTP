#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numeros_pares()
{
    printf("\n2 4 6 8 10\n\n");
}

void numeros_impares()
{
    printf("\n1 3 5 7 9\n\n");
}

void sair()
{
    printf("\nAte mais\n");
}

int main()
{
    int continuar=1;

    do
    {
        printf("\nImprimindo o MENU\n\n");
        printf("\n1. Numeros Pares\n");
        printf("\n2. Numeros Impares\n");
        printf("\n0. Sair\n\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1: numeros_pares();
            break;
            case 2: numeros_impares();
            break;
            case 0: sair();
            break;
            default:
                printf("\nDigite uma opcao valida\n\n");
        }
    } while(continuar);
}
