#include <stdio.h>

int main()
{
    int numero;
    printf ("\nEntre com um numero: \n\n");
    scanf("\n%d", & numero);
    if (numero%2 == 0)
        printf("O numero e par. \n");
    else
        printf("\nO numero e impar. \n");
    if (numero%3 == 0)
        printf("\nO numero e multiplo de 3.\n");
    if (numero%5 == 0)
        printf("\nO numero e multiplo de 5.\n");
    if (numero%7 == 0)
        printf("\nO numero e multiplo de 7.\n");
    return 0;
}



