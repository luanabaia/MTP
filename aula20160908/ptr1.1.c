#include <stdio.h>
#include <stdlib.h>    //ponteiro

int main()
{
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL, *q; // O PONTEIRO ESTÁ APONTANDO PARA NADA - inicializar ponteiros
    printf("%p : %u\n", &numero, numero); //endereço : dado
    p = q = (unsigned char *) & numero;// O não vai alterar e o q vai ficar mudando
    for(; p < q + sizeof(int); p++)
    printf("%p : %X\n", p, *p); // endereço com o dado
    return 0;
}
