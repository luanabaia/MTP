#include <stdio.h>
#include <stdlib.h> //ponteiro

int main()
{
    int vet[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int cont = 0;
    unsigned char *p = NULL, *q; // O PONTEIRO ESTÁ APONTANDO PARA NADA - inicializar ponteiros
    p = q = (unsigned char *) vet;
    for(; p < q + sizeof(vet); p++)
    {
        if(*p == 0xFF) cont++; // FF (1111 1111) - *p = conteudo
        printf("\n%p : %X\n", p, *p);
    }
    printf("\nBytes apenas com 1's: %d\n", cont);
    return 0;
}
