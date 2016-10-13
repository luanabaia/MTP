# include <stdio.h>

int main ()
{
    int numero, i;
    printf("Entre com um numero: \n\n");
    scanf("%d", &numero);
    for (i = 2; i < numero; i++ )
    {
        if(numero%i == 0)
        {
            printf("\nNao e primo!!!\n\n");
            break;
        }
    }
    if(i == numero)
        printf("\n\nPrimo!!!\n");
    return 0;
}
