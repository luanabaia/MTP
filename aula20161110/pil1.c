#include <stdio.h>
#define MAXPILHA 10 // tamanho máximo da pilha

typedef char DADO; // muda o tipo da Pilha aqui
typedef struct Pilha_ {
    int idtopo;
    DADO dados[MAXPILHA];
} Pilha;

void push(Pilha * ppilha, DADO elemento);
void pop(Pilha * ppilha);
DADO top(Pilha pilha);
int empty(Pilha pilha);

int main()
{
    int i;
    Pilha pilha;
    pilha.idtopo = -1; // Pilha vazia
    // Programa
    printf("Push: ");
    for(i = 0; i < 5; i++) {
        push(&pilha, 'A' + i); // testa PUSH
        printf("%c ", top(pilha)); // testa TOP
    }
    printf("\nPop:  ");
    while(!empty(pilha)) { // testa EMPTY
        printf("%c ", top(pilha)); // testa TOP
        pop(&pilha); // testa POP
    }
    printf("\nEstouro?: ");
    for(i = 0; i < MAXPILHA+1; i++) { // Testa estouro de pilha
        push(&pilha, 'A' + i);
        printf("%c ", top(pilha)); // testa TOP
    }
    return 0;
}

void push(Pilha * ppilha, DADO elemento)
{
    if(ppilha->idtopo + 1 < MAXPILHA) {
        ppilha->idtopo++;
        ppilha->dados[ppilha->idtopo] = elemento;
    }
    else
        fprintf(stderr,"\nERROR :: Estouro de pilha!\n");
}

void pop(Pilha * ppilha)
{
    if(!empty(*ppilha)) {
        ppilha->dados[ppilha->idtopo] = 0x0; // opcional, "limpa" elemento
        ppilha->idtopo--;
    }
    else
        fprintf(stdout,"\nWARNING :: Pilha vazia!\n");
}

DADO top(Pilha pilha)
{
    return pilha.dados[pilha.idtopo];
}

int empty(Pilha pilha)
{
    return (pilha.idtopo == -1);
}
