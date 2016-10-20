# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main ()
{
    char palavra[256];
    int tam;
    printf("\nEntre com uma palavra \n\n");
    gets(palavra);
    tam = strlen(palavra);
    printf("\nTotal de letras da palavra: %d \n", tam);
    return 0;
}
