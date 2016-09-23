#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, j;
    srand(time(0));
    j = rand()%100;  // rand somente numeros inteiros
    printf("\n%d\n", j);
    printf("\nDigite um numero entre 0 e 99\n");
    printf("\n\n");
    scanf("%d", &numero);
    if (numero < j)
    {
        printf("\nBaixo\n");
    }
    if (numero > j)
    {
        printf("\nAlto\n");
    }
    if (numero == j)
    {
        printf("\nAcertou\n");
    }
    return 0;
}
