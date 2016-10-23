#include <stdio.h>
#include <stdlib.h>    //ponteiro

int main()
{
    int vetor[] = {0,1,2,4,8};
    //int tam = sizeof(vetor)/sizeof(int); // 20=5*4bits/5 inteiros
    int contagem = 0;
    unsigned char *p = NULL, *q; // O PONTEIRO ESTÁ APONTANDO PARA NADA - inicializar ponteiros
    p = q = (unsigned char *) vetor;
    for(; p < q + sizeof(vetor); p++)
    {
        if(*p == 0x0) contagem++; // incrementa quando tiver 0 - *p = conteudo
        printf("\n%p : %d\n", p, *p);
    }
    printf("\nBytes apenas com 0's: %d\n", contagem);
    return 0;
}

