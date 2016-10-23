#include <stdio.h>
#include <complex.h>

int main ()
{
    double complex Z1, raizquadrada, produto;
    double complex csqrt(double complex); // raiz quadrada de numero complexo
    double preal, pimag;   //  parte imaginaria parte imaginaria
    printf("\nEntre com a parte real de Z1:\n\n ");
    scanf("%lf", &preal);
    printf("\nEntre com a parte imaginaria de Z1:\n\n ");
    scanf("%lf", &pimag);
    Z1 = preal + pimag * I;
    raizquadrada = csqrt(Z1);
    printf("Numero complexo: %lf + %lf i\n\n", creal(Z1), cimag(Z1) );
    printf("A raiz quadrada do numero complexo e: %lf + (%lf i)\n\n", creal(raizquadrada), cimag(raizquadrada));
    return 0;
}
