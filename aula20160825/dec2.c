#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, j, resul;
    do {
            printf ("Entre com um numero inteiro nao-negativo \n\n");
            scanf("%d", &numero);
    } while(numero < 0);
    srand(time(0));
    j = rand()%2;  // rand somente numeros inteiros
    printf("\n%d\n", j);
    resul = j + numero;
    printf("\n%d\n", resul);
    if (resul %2 == 0)
    {
        printf("\n\nO numero %d e par\n\n", resul);
    }
    else
        printf("\n\nO numero %d e impar\n\n", resul);
    return 0;
}
