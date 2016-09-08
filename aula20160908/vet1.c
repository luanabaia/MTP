#include <stdio.h>
#include <stdlib.h> //ponteiro
#include <time.h>
#define N 10000

int main()
{
    srand(time(0));
    unsigned int numero;
    float numero_aleatorio[N];
    float soma = 0.0f, media;
    int i;
    printf("Digite um numero inteiro nao negativo:\n\n");
    scanf("%u", &numero);
    for(i = 0; i < N; i++) numero_aleatorio[i] = rand()%numero + 1;
    for(i = 0; i < N; i++) soma = soma + numero_aleatorio[i];
    media = soma/N;
    printf("\nMedia: %f\n", media);
    return 0;
}
