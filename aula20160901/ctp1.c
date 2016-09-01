# include <stdio.h>
# include <ctype.h>

int main ()
{
    char frase[256];
    char olheiro;
    int indice = 0;
    printf("Entre com uma frase\n\n");
    gets(frase);
    olheiro = frase[indice];
    while(olheiro != '\0') // enquanto olheiro for diferente de zero
    {

            frase[indice] = tolower(olheiro); //recebe a letra maiuscula e transforma em minuscula
            indice++;
            olheiro = frase[indice];
    }
    printf("\n%s\n", frase);
    return 0;
}
