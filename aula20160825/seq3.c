#include <stdio.h>

//  rand()%6   de 0 a 5
//  rand()%6 +1

int main ()
{
    float a, b, c, media;
    printf("\nDigite as notas do aluno de 0 a 10: \n");
    scanf("\n%f \n%f \n%f", &a, &b, &c);
    media = (2*a+3*b+5*c)/(2+3+5);
    printf("A media do aluno e: %.2f", media);
    return 0;
}
