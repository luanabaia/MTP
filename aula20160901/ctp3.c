# include <stdio.h>
# include <ctype.h>

int main ()
{
    char frase[256];
    int indice = 0, verificador, contador=0;
    printf("Entre com uma frase\n\n");
    gets(frase);
    verificador = frase[indice];
    while(verificador != '\0')
    {
        if (verificador = isalpha(verificador))
            contador++;
            indice++;
            verificador = frase[indice];
    }
    printf("%d\n", contador);
    return 0;
}

