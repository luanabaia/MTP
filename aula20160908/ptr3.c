#include <stdio.h>
#include <stdlib.h> //ponteiro

int main()
{
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int contagem = 0;
    unsigned char *p = NULL, *q; // O PONTEIRO ESTÁ APONTANDO PARA NADA - inicializar ponteiros
    p = q = (unsigned char *) vetor;
    for(; p < q + sizeof(vetor); p++)
    {
        if(*p == 0xFF) contagem++; // FF (1111 1111) - *p = conteudo
        printf("\n%p : %X\n", p, *p);
    }
    printf("\nBytes apenas com 1's: %d\n", contagem);
    return 0;
}
