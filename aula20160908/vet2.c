#include <stdio.h>
#include <stdlib.h> //ponteiro
#define N 100

int main()
{
    int vet[100], i, n;
    printf ("\nDigite o comprimento da sequencia: \n\n");
    scanf ("%d", &n);
    printf("\n");
    printf ("\nDigite uma sequencia com %d numeros inteiros: \n\n", n );
    for ( i = 0 ; i < n; i ++)
    {
       scanf ("\n%d", &vet [i]);
       printf("\n");
    }
    for ( i = n-1 ; i >= 0; i --)
    {
        printf ("\n%d\n", vet[i]);
        printf ("\n") ;
    }
    return 0;
}
