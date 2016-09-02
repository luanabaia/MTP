#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero;
    int j, resultado;
    do {
            printf ("\nEntre com um numero inteiro nao-negativo \n\n");
            scanf("\n%d\n", & numero);
        }   while(numero < 0);
    srand(time(0));
    j = rand()%2;  // rand somente numeros inteiros
    printf("\n%d\n", j);
    resultado = j + numero;
    printf("\n%d\n", resultado);
    if (resultado %2 == 0)
    {
        printf("\n\nO numero %d e par\n\n", resultado);
    }
    else
        printf("\n\nO numero %d e impar\n\n", resultado);
    return 0;
}


