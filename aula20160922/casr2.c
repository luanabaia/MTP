#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void recebe_dado(char tipo, void * endereco);

int main() {
    int i;
    float f;
    char c;
    printf("\nEntre com um inteiro:\n\n");
    recebe_dado('i', &i);
    printf("\nEntre com um float:\n\n");
    recebe_dado('f', &f);
    printf("\nEntre com uma frase:\n\n");
    recebe_dado('c', &c);
    printf("\nPara %d, o quadrado: %d\n\n", i, i*i);
    printf("\nPara %f, a raiz: %f\n\n", f, sqrt(f));
    printf("\nPara %c o caractere: %c\n\n", c, tolower(c));
    return 0;
}

void recebe_dado(char tipo, void * endereco) {
    int c;
    switch(tipo) {
        case 'i': scanf("%d", (int*) endereco);//gravar como inteiro
        break;
        case 'f': scanf("%f", (float*) endereco);
        break;
        case 'c': scanf("%f", (char*) endereco);
        break;
    }
    while((c = getchar()) != EOF && c != '\n'); //apagar o buffer de entrada
}
