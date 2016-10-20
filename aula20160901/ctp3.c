# include <stdio.h>
# include <ctype.h>

int main ()
{
    char frase[256];
    int indice = 0, verific, cont=0;
    printf("Entre com uma frase\n\n");
    gets(frase);
    verific = frase[indice];
    while(verific != '\0')
    {
        if (verific = isalpha(verific))
            cont++;
            indice++;
            verific = frase[indice];
    }
    printf("%d\n", cont);
    return 0;
}
