# include <stdio.h>
# include <math.h>


int main ()
{
    double base, numero, logaritmo;
    double log10(double numero);
    printf("\nEntre com um valor qualquer\n\n");
    scanf("%lf", &numero);
    printf("\nO valor da base e 10, digite 10:\n\n");
    scanf("%lf", &base);
    logaritmo = log(numero)/log(base);
    printf("\nO valor do logaritmo e: %lf\n",logaritmo);
    return 0;
}

