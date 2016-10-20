#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i, j, soma, soma_dados=0;
    printf("Sorteio aleatorio de tres numeros: \n");
    j = rand()%6 + 1;
    for (i=0; i<3; i++)
    {
        j = rand()%6 + 1;
        printf("\n O numero e %d \n ", j);
        soma_dados = soma_dados + j;
    }
    printf("\nA soma e: %d", soma_dados);
    if (soma_dados == 7 || soma_dados == 11)
        printf("\n\nJogador ganhou!\n\n");
    else
        printf("\n\nJogador perdeu!\n\n");
    return 0;
}
