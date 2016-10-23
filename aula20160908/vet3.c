#include <stdio.h>
#include <stdlib.h> //ponteiro


int main()
{
    int vetor[100], i, n, soma = 0, prod = 1;
    printf ("\nDigite uma sequencia com 10 numeros inteiros: \n");
    for ( i = 0 ; i < 10; i ++)
    {
       scanf ("\n%d", &vetor [i]) ;
       soma = soma + vetor[i];
       prod = prod * vetor[i];
    }
    printf("\nA soma da sequencia e: %d\n", soma);
    printf("\nO produto da sequencia e: %d\n", prod);
    return 0;
}
