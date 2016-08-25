#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int numero, i, j, resultado;
    printf ("\nEntre com um numero inteiro nao-negativo \n\n");
    scanf("\n%d", & numero);
    j = rand()%2;
    for (i=0; i<1; i++)
    {
        printf("\n %d \n ", rand()%2);

    }
    resultado = numero + j;
    return 0;
}


