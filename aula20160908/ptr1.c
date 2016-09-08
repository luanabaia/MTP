#include <stdio.h>
#include <stdlib.h>    //ponteiro

int main()
{
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL; // O PONTEIRO ESTÁ APONTANDO PARA NADA - inicializar ponteiros
    printf("%p : %u\n", &numero, numero); //endereço : dado
    p = (unsigned char *) & numero;// tranformando meu endereço de inteiros em carcteres
    printf("%p : %X\n", p, *p);
    printf("%p : %X\n", p+1, *(p+1)); // soma um tipo para o ponteiro e soma o conteudo
    printf("%p : %X\n", p+2, *(p+2)); // soma um tipo para o ponteiro e soma o conteudo
    printf("%p : %X\n", p+3, *(p+3)); // soma um tipo para o ponteiro e soma o conteudo
    return 0;
}
