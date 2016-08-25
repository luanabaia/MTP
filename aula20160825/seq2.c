#include <stdio.h>

int main()
{
    float base, altura, area_triangulo;
    printf ("Entre com a base e a altura: \n\n");
    scanf("\n%f \n%f", & base, & altura);
    area_triangulo = (base*altura)/2;
    printf("\nA area do triangulo e: %.2f\n", area_triangulo);
    return 0;
}


