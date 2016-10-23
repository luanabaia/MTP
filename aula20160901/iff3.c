#include <stdio.h>

int main()
{
    int numero, cifra, i, produto;
    printf("Digite um numero: \n\n");
    scanf("%d", &numero);
    if(numero >= 0)
    {
        do
        {
            cifra = numero % 10;
            printf("%d", cifra);
            numero /= 10;

        } while(numero != 0);
        printf("\n\n");
    }
    else if (numero < 1)
        {
            numero = numero * -1;
            printf("-");
            do {
                    cifra = numero % 10;
                    printf("%d", cifra);
                    numero /= 10;
                } while(numero != 0);
        }
        return 0;
}
