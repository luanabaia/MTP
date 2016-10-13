#include<stdio.h>

int main()
{
     int numero, i;
     int perfeito = 0;
     printf("\nDigite um numero: \n\n");
     scanf("%d",&numero);
     printf("\n");
     printf("\nDivisores: ");
     for(i = numero-1; i != 0; i--)
        {
            if(numero%i == 0)
            {
                printf("%d, ",i);
                perfeito = perfeito + i;
            }
        }
        if(perfeito == numero)
            printf("\n\nPerfeito\n");
    return 0;
}
