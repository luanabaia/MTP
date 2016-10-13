# include <stdio.h>
# include <math.h>

int main ()
{
    double a, b, c, angulo;
    double cos (double angulo);
    printf("\nEntre com o valor do angulo do triangulo\n\n");
    scanf("%lf", &angulo);
    printf("\nEntre com o valor de b :\n\n");
    scanf("%lf", &b);
    printf("\nEntre com o valor de c:\n\n");
    scanf("%lf", &c);
    a = sqrt((pow(b,2.))+(pow(c,2.))-(2*b*c*cos(angulo)));
    printf("\nO valor de a e: %lf.\n", a);
    return 0;
}
