# include <stdio.h>

int main ()
{
    int Base, Potencia, i, numero = 0;
    printf("\nEntre com o valor de Base e Potencia: \n\n");
    scanf("%d %d", &Base, &Potencia);
    printf("\n");
    numero = Base;
    for(i = 1; i < Potencia; i++)
    {
        numero *= Base;
    }
    printf("O numero e : %d \n", numero);
    return 0;
}
