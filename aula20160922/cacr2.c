#include <stdio.h>
#include <string.h>
#include <complex.h>
#include <math.h>

float delta();

int main()
{
    printf("\nDelta da equacao\n\n");
    delta();
    printf("Fim da resolucao da equacao\n\n");
    return 0;
}

float delta() {
    float formula_delta, a, b, c, raiz1, raiz2;
    double complex raiz1_complex, raiz2_complex;
    double preal, pimag;
    printf("Digite os valores de a, b e c\n\n");
    scanf("%f %f %f", &a, &b, &c);
    formula_delta =  (pow(b, 2) - (4*a*c));
    printf("\n\nO valor de delta e: \n\n%g\n\n", formula_delta);
    if(formula_delta > 0)
        {
            raiz1 = (-b + sqrt(formula_delta))/(2*a);
            raiz2 = (-b - sqrt(formula_delta))/(2*a);
            printf("As raizes da equacao sao %g e %g", raiz1, raiz2);
        }
    if(formula_delta == 0)
        {
            raiz1 = raiz2 = (-b/(2*a));
            printf("As raizes da equacao sao %g e %g", raiz1, raiz2);
        }
    if(formula_delta < 0)
        {
            raiz1_complex = -b/(2*a) + I* sqrt(-formula_delta)/(2*a);
            raiz2_complex = -b/(2*a) - I* sqrt(-formula_delta)/(2*a);
            printf("As raizes da equacao sao %.3lf + %.3lf i e %.3lf + %.3lf i\n\n",
                   creal(raiz1_complex), cimag(raiz1_complex), creal(raiz2_complex), cimag(raiz2_complex));
        }
    return 0;
}
