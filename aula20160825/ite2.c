# include <stdio.h>

int main ()
{
    int B, P, i, numero=0;
    printf("\nEntre com o valor de B e P: \n");
    scanf("%d %d", &B, &P);
    numero = B;
    for(i = 1; i < P; i++)
    {
        numero *= B;
    }
    printf("O numero e %d: \n", numero);
    return 0;
}
