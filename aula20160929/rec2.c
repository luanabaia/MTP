#include <stdio.h>

int soma(int *vetor, int posicao, int tamanho)
{
        if (posicao == tamanho)
            return 0;
        return(vetor[posicao] + soma(vetor,++posicao,tamanho));
}

int main()
{
        int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
        int N = sizeof(A)/sizeof(int);
        printf("A soma dos elementos do vetor A e: %d\n", soma(A, 0, N));
        return 0;
}
