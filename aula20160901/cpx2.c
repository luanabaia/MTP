#include <stdio.h>
#include <complex.h>

int main ()
{
    double complex Z1, conjugado, produto;
    double preal, pimag;   //  parte imaginaria parte imaginaria
    printf("\nEntre com a parte real de Z1:\n\n ");
    scanf("%lf", &preal);
    printf("\nEntre com a parte imaginaria de Z1:\n\n ");
    scanf("%lf", &pimag);
    Z1 = preal + pimag * I;
    conjugado = preal - pimag * I;
    produto = Z1 * conjugado;
    printf("Numero complexo: %lf + %lf i\n\n", creal(Z1), cimag(Z1) );
    printf("Conjugado do numero complexo: %lf + (%lf i)\n\n", creal(conjugado), cimag(conjugado));
    printf("O produto do numero complexo pelo seu conjugado e: %lf\n\n", creal(produto), cimag(produto));
    return 0;
}
