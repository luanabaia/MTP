#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i, j, soma, soma_dados;
    printf("Sorteio de tres numeros: \n");
    j = rand()%6 + 1;
for (i=0; i<3; i++)
    {
        j = rand()%6 + 1
        printf("\n O numero e %d \n ", j);
        soma_dados = soma_dados + j

    }
    soma_dados = j;
    printf("A soma e: %d", soma_dados);
    if (soma_dados == 7 || soma_dados == 11)
        printf("\nJogador ganhou!");
        else
            printf("\nJogador perdeu!");
    return 0;
}

