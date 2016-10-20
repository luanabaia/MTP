#include <stdio.h>

int main()
{
    double num, i, fat;
    printf ("Entre com um numero: \n");
    scanf("%lf", &num);
    fat = 1;
    for (i = 2; i <= num; i++)
        fat = fat*i;
    printf("O fatorial de %lf e igual a %lf.\n", num, fat);
    return 0;
}
