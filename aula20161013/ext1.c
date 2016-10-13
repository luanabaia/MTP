#include <stdio.h>
#include <stdlib.h>

int _TAMANHO = 0;
float * recebeNumero(float * vetor);
float media(float * vetor, int tamanho);

int main()
{
    int opc, i;
    float * vetor = NULL;
    do {
            printf("Entre com um numero: ");
            vetor = recebeNumero(vetor);
            printf("Media: %f\n", media(vetor, _TAMANHO));
            printf("Deseja outro? (0 - nao; 1 - sim): ");
            scanf("%d", &opc);
    } while(opc != 0);
    free(vetor);
    return 0;
}
float * recebeNumero(float * vetor)
{
    _TAMANHO++;
    if(vetor == NULL)
        vetor = (float *) malloc(sizeof(float));
    else
        vetor = (float *) realloc(vetor, _TAMANHO*sizeof(float));
    printf("Entre com um numero: ");
    scanf("%f", &vetor[_TAMANHO-1]);
    return vetor;
}
float media(float * vetor, int tamanho)
{
    float soma = 0.f;
    int i;
    for(i = 0 ; i < tamanho; i++)
        soma = soma + vetor[i];
    return soma/tamanho;
}
