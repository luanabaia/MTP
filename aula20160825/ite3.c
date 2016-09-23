# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main ()
{
    char palavra[256];
    int tamanho;
    printf("\nEntre com uma palavra \n\n");
    gets(palavra);
    tamanho = strlen(palavra);
    printf("\nTotal de letras da palavra: %d \n", tamanho);
    return 0;
}
