#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pega_carta();
char mostra_carta(int carta);

int main() {
    srand(time(0));
    int carta1 = pega_carta(), carta2 = pega_carta();
    int i, ncartas, carta, soma = 0;
    printf("\nQuantas cartas voce quer?\n\n");
    scanf("%d", &ncartas);
    for (i = 0; i < ncartas; i++) {
        carta = pega_carta();
        printf("\n\n%c\n", mostra_carta(carta));
        soma = soma + carta;
    }
    if(soma > 21)
        printf("\n\nVoce ganhou!\n");
    else {
        printf("\n\nBanca: %c %c\n", mostra_carta(carta1), mostra_carta(carta2));
        if (soma > carta1 + carta2)
            printf("\n\nVoce ganhou!\n");
        else
            printf("\n\nVoce perdeu!\n");
    }
    return 0;
}

int pega_carta() {
    int carta = rand()%13 + 1;
    return carta;
}

char mostra_carta(int carta) {
    char figura;
    switch (carta) {
        case 1: figura = 'A';
        break;
        case 10: figura = 'D';
        break;
        case 11: figura = 'J';
        break;
        case 12: figura = 'Q';
        break;
        case 13: figura = 'K';
        break;
        default: figura = 48 + carta;
    }
    return figura;
}
