#include <stdio.h>
#include <complex.h>

int main ()
{
    double complex Z1, Z2, soma;
    double preal, pimag;   //  parte imaginaria parte imaginaria
    printf("\nEntre com a parte real de Z1:\n\n ");
    scanf("%lf", &preal);
    printf("\nEntre com a parte imaginaria de Z1:\n\n ");
    scanf("%lf", &pimag);
    Z1 = preal + pimag * I;
    printf("\nEntre com a parte real de Z2:\n\n ");
    scanf("%lf", &preal);
    printf("\nEntre com a parte imaginaria de Z2:\n\n ");
    scanf("%lf", &pimag);
    Z2 = preal + pimag * I;
    soma = Z1 + Z2;
    printf("\nSoma: %lf + %lf i\n",creal(soma),cimag(soma));
    printf("\nSoma: %lf /_ %lf rad\n",cabs(soma),carg(soma));   // argumento
    return 0;
}
