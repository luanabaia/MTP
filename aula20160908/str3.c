#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, palindromo = 1;
    char palavra[80];
    printf("Informe uma palavra:\n");
    gets(palavra);
    int n = strlen(palavra); // tamanho da string
    i = 0; // posicoes iniciais da string
    j = (n - 1); // posicoes finais da string
    while ((i <= j) && (palindromo == 1))
        {
            if (toupper(palavra[i]) != toupper(palavra[j]))
                palindromo = 0;
    else {
            i = i + 1;
            j = j - 1;
            }
            }
            if (palindromo == 1)
                printf("\n%s e um palindromo.", palavra);
            else
                printf("\n%s NAO e um palindromo.", palavra);
}
