#include <stdio.h>
#define QTDEMAX 1000

struct CAD {
    int idade;
    char nome[50];
    char telefone[11];
};

int main()
{
    int opc, i, qtde = 0;
    struct CAD cadastro[QTDEMAX];
    while(1) {
        printf("1 - Cadastra, 2 - Sair;");
        scanf("%d", &opc);
        if(opc == 2) break;
        cadastro[qtde].idade = 3;
        qtde++;
    }
    for (i = 0; i < qtde; i++)
        mostra(cadastro[i]);
    return 0;
}
