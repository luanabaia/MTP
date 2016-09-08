#include <stdio.h>
#include <stdlib.h> //ponteiro
#include <string.h>

int main()
{
    char frase[256], i;
    printf("Entre com uma frase: \n\n ");
    gets(frase);
    for ( i = 0 ; frase[i]; i ++)
        frase[i] = toupper(frase[i]);
    printf ("\n\nA frase tem %d caracteres.\n\n", strlen(frase));
    if(strcmp(frase,"BOM DIA") == 0)
        printf("\nBom dia pra voce tambem!\n");
    else
        printf("\nVoce quer dizer: %s?\n\n", frase);
    return 0;
}
