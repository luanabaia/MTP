#include <stdio.h>
#include <stdlib.h> //ponteiro

int main()
{
    unsigned int *num1, *num2, *p;
    int x, y, soma;
    printf("Digite dois numeros reais\n\n");
    scanf("%d %d", &num1, &num2);
    printf("\nEndereco de memoria do primeiro numero: %p \n\n", &num1);
    printf("\nConteudo do primeiro numero: %d \n\n", num1);
    printf("\nEndereco de memoria do segundo numero: %p \n\n", &num2);
    printf("\nConteudo do segundo numero: %d \n\n", num2);
    x   = num1;
    y = num2;
    soma = x + y;
    p = &soma;
    printf("\nEndereco de memoria do segundo numero: %p \n\n", p);
    printf("\nConteudo do segundo numero: %d \n\n", *p);
    return 0;
}
