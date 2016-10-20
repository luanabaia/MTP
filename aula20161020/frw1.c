#include <stdio.h>
#include <string.h>
#define NCHAR 256

void gravarDados();
void lerDados();

int main()
{
    int opcao;
    do {
            printf("*****************************");
            printf("\n\n1 - Receber dados\n\n");
            printf("\n\n2 - Recuperar dados\n\n");
            printf("\n\n0 - Sair\n\n");
            printf("*****************************");
            printf("\n\nEntre com a opcao: \n\n");
            fscanf(stdin, "%d", &opcao);
            getchar();
            if(opcao == 1)
                gravarDados();
            if(opcao == 2)
                lerDados();
    } while(opcao);
    return 0;
}
void gravarDados()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    printf("\n\nEntre com o nome: ");
    fgets(nome, NCHAR, stdin);
    nome[strlen(nome) - 1] = '0'; // exclui enter
    printf("\n\nEntre com a idade: ");
    fscanf(stdin, "%d", &idade);
    printf("\n\nEntre com a altura: ");
    fscanf(stdin, "%f", &altura);
    arquivo = fopen("info.txt", "w");
    if(arquivo == NULL)
        fprintf(stderr, "\n\nErro na criacao do arquivo!\n");
    else {
        fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura);
        fclose(arquivo);
    }
}

void lerDados()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura; // em metros
    arquivo = fopen("info.txt", "r");
    if(arquivo == NULL)
        fprintf(stderr, "Arquivo nao existente!\n");
    else {
            fgets(nome, NCHAR, arquivo);
            nome[strlen(nome) - 1] = '0'; // exclui enter
            fscanf(arquivo, "%d\n%f\n", &idade, &altura);
            fclose(arquivo);
            printf("\n\nNome:  ");
            fprintf(stdout, "%s\n", nome);
            printf("\n\nIdade [anos]: ");
            fprintf(stdout, "%d\n", idade);
            printf("\n\nAltura [metros]: ");
            fprintf(stdout, "%g\n", altura);
    }
}
