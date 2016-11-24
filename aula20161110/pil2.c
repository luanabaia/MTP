#include <stdio.h>
#include <stdlib.h>

typedef int DADO; // muda o tipo da Pilha aqui
typedef struct Pilha_ {
    DADO topo;
    struct Pilha_ * proximo;
} Pilha;

void push(Pilha ** ppilha, DADO elemento);
void pop(Pilha ** ppilha);
DADO top(Pilha * pilha);
int empty(Pilha * pilha);

int main()
{
    int i;
    Pilha * pilha = NULL; // Pilha vazia
    // Programa
    printf("\nPush: ");
    for(i = 0; i < 5; i++) {
        push(&pilha, i); // testa PUSH
        printf("%d ", top(pilha)); // testa TOP
    }
    printf("\nPop:  ");
    while(!empty(pilha)) { // testa EMPTY
        printf("%d ", top(pilha)); // testa TOP
        pop(&pilha); // testa POP
    }
    printf("\n\n");
    return 0;
}

void push(Pilha ** ppilha, DADO elemento)
{
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = elemento;
    novo->proximo = *ppilha;
    *ppilha = novo;
}

void pop(Pilha ** ppilha)
{
    Pilha * aux = NULL;
    if(!empty(*ppilha)) {
        aux = (*ppilha)->proximo;
        free(*ppilha);
        *ppilha = aux;
    }
    else
        fprintf(stdout,"\nWARNING :: Pilha vazia!\n");
}

DADO top(Pilha * pilha)
{
    return pilha->topo;
}
int empty(Pilha * pilha)
{
    return (pilha == NULL);
}

