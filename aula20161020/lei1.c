#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * iniciaTexto();
char * recebeTexto();
void gravaTexto(char * texto, int tamanho);
char * leTexto(); //linha incluida

int main()
{
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = leTexto(); // incluida
    printf("%s", texto);
    texto = recebeTexto();
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    gravaTexto(texto, strlen(texto)); // � s� isso!!!!!!!!!!
    free(texto);
    return 0;
}

char * iniciaTexto()
{
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}

char * recebeTexto()
{
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    return texto;
}

void gravaTexto(char * texto, int tamanho)
{
    FILE * arquivo;
    int i;
    arquivo = fopen("meutexto.txt", "a");
    if (arquivo == NULL)
        fprintf(stderr, "Erro na gravacao do arquivo!\n\n");
    else {
        for(i = 0; i < tamanho; i++)
            fputc(texto[i], arquivo); // colocar caractere no arquivo
        fclose(arquivo);
    }
}

char * leTexto()
{
    FILE * arquivo; // incluida
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen("meutexto.txt", "r"); // incluida
    do {
        c = fgetc(arquivo); // modificada
        if(c != EOF) // modificada
            {
                aux = (char *) realloc(texto, tamanho+2);
                if(aux != NULL) {
                    texto = aux;
                    texto[tamanho] = c;
                    tamanho++;
                    texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != EOF); // modificada
    fclose(arquivo); //incluida
    return texto;
}
