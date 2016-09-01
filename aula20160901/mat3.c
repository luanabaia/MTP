# include <stdio.h>
# include <math.h>


int main ()
{
    double base, numero, logaritmo;
    double log10(double numero);
    printf("\nEntre com um valor qualquer\n\n");
    scanf("%lf", &numero);
    printf("\nEntre com o valor da base:\n\n");
    scanf("%lf", &base);
    logaritmo = log(numero)/log(base);
    printf("\nO valor do logaritmo e: %lf\n",logaritmo);
    return 0;
}

