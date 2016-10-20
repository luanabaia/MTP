#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, i;
    srand(time(0));
    i = rand()%100;  // rand somente numeros inteiros
    printf("\n%d\n", i);
    printf("\nDigite um numero entre 0 e 99\n");
    printf("\n\n");
    scanf("%d", &num);
    if (num < i)
    {
        printf("\nBaixo\n");
    }
    if (num > i)
    {
        printf("\nAlto\n");
    }
    if (num == i)
    {
        printf("\nAcertou\n");
    }
    return 0;
}
