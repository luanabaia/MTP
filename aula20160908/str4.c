#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char palavra[30];
    int i = 0;
    int comprimento;
    printf("Digite o comprimento da palavra: "); // Tamanho da palavra
    scanf("%d", &comprimento);
    printf("\n\nDigite a palavra a ser encriptada: \n\n"); // Frase que será encripitada
    scanf("%s", palavra);
    printf("\n\nPalavra encriptada com sucesso!\n\n");
    printf("\n\nEncriptacao:  \n\n");
    for(i = 0; i < strlen(palavra); i++)
        {
            int enc = (int)palavra[i] + comprimento;
            printf("%c", (char)enc);
            }
    printf("\n\n");
    return 0;
}
