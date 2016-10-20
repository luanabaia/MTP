#include <stdio.h>
#include <stdlib.h> //ponteiro

int main()
{
    int vet[100], i, n, soma = 0, prod = 1;
    printf ("\nDigite uma sequencia com 10 numeros inteiros: \n\n");
    for ( i = 0 ; i < 10; i ++)
    {
       scanf ("\n%d", &vet [i]) ;
       soma = soma + vet[i];
       prod = prod * vet[i];
    }
    printf("\nA soma da sequencia e: %d\n", soma);
    printf("\nO produto da sequencia e: %d\n", prod);
    return 0;
}
