#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 20

struct cadastro
{
    int codigo;
    char nome[50];
    int idade;
    int telefone;

};

typedef struct cadastro Cadastro;

int main()

{
    int opcao, codigo = 1, limite = 0, excluidos[N], limite_exc = 0, i, AUX, min, j;
    char op;
    Cadastro p[N];
    menuPrincipal:

        printf("\n\n                      Menu Opcoes\n");
        printf("\n   _________________________________________________\n"
                "\n      1 - Cadastrar\n"
                "\n      2 - Listar Nomes \n"
                "\n      3 - Listar Idades \n"
                "\n      4 - Listar Telefones \n"
                "\n      5 - Sair\n"
                "    _________________________________________________"
                "\n\n    Opcao:  ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:

                CadastrarCadastro:

                system("cls"); // Limpar Tela
                if (limite == N)    //Verificando memória
                {
                    printf("\n  Nao ha memoria disponivel para um novo cadastro!\n\n");
                    system("pause");
                    goto menuPrincipal;
                    break;
                }
                else
                {
                    system("cls");
                    printf("\n              Cadastro    \n\n");
                    if(limite_exc == 0)
                        {
                            p[limite].codigo = codigo;      // Auto-incremento do código
                            printf("\n    Codigo: %d\n", p[limite].codigo);
                            printf("\n\n    Nome:   ");
                            scanf("%s", &p[limite].nome);
                            fflush(stdin);
                            printf("\n\n    Idade:   ");
                            scanf("%d", &p[limite].idade);
                            printf("\n\n    Telefone - Somente Digitos:   ");
                            scanf("%d", &p[limite].telefone);
                            codigo++;
                            limite++;
                        }
                        else
                        {
                            for (i = 0; i < limite_exc; i++)
                                {
                                    min = i;
                            for (j = (i+1); j < limite_exc; j++)
                                {
                                    if(excluidos[j] > excluidos[min])
                                    {
                                        min = j;
                                    }
                                }
                            if (i != min)
                                {
                                    AUX = excluidos[i];
                                    excluidos[i] = excluidos[min];
                                    excluidos[min] = AUX;
                                }
                                }
                                p[limite].codigo = excluidos[limite_exc-1];
                                limite_exc--;
                                printf("\n    Codigo: %d\n", p[limite].codigo);
                                printf("\n\n    Nome:   ");
                                scanf("%s", &p[limite].nome);
                                fflush(stdin);
                                printf("\n\n    Idade:   ");
                                scanf("%d", &p[limite].idade);
                                printf("\n\n    Telefone - Somente digitos:   ");
                                scanf("%d", &p[limite].telefone);
                                limite++;
                        }
                        printf("\n\nCadastro realizado com sucesso!\n\n");
                        printf("\n\nDeseja cadastrar outro produto? [s/n]\n\n Opcao:   \n");
                        scanf("%s", &op);
                        if(op == 's' || op == 'S')
                        {
                            goto CadastrarCadastro;
                            system("cls");
                        }
                        else if(op == 'n' || op == 'N')
                        {
                            system("cls");
                            goto menuPrincipal;
                            break;
                        }
                        else
                        {
                            printf("\n\nOpção Invalida!\n\n");
                            system("pause");
                            goto menuPrincipal;
                            break;
                        }
                }

        case 2:

            system("cls"); //limpar a tela
            for(j = 0 ; j < limite; j++)
            {
                printf("\n\n\n  Codigo:   %d\n", p[j].codigo);
                printf("\n  Nome:   %s\n", p[j].nome);
            }
            if(limite == 0)
                {
                    printf("\n\n    Nao ha cadastro!\n\n");
                    system("pause");
                    goto menuPrincipal;
                    break;
                }
            goto menuPrincipal;
            break;
            system("cls");

        case 3:

            system("cls"); //limpar a tela
            for(j = 0 ; j < limite; j++)
            {
                printf("\n\n\n  Codigo:   %d\n", p[j].codigo);
                printf("\n  Idade:   %d\n", p[j].idade);
            }
            if(limite == 0)
                {
                    printf("\n\n    Nao ha cadastro!\n\n");
                    system("pause");
                    goto menuPrincipal;
                    break;
                }
            goto menuPrincipal;
            break;
            system("cls");

        case 4:

            system("cls"); //limpar a tela
            for(j = 0 ; j < limite; j++)
            {
                printf("\n\n\n  Codigo:   %d\n", p[j].codigo);
                printf("\n  Telefone:   %d\n", p[j].telefone);
            }
            if(limite == 0)
                {
                    printf("\n\n    Nao ha cadastro!\n\n");
                    system("pause");
                    goto menuPrincipal;
                    break;
                }

            goto menuPrincipal;
            break;
            system("cls");

        case 5:

            printf("\n  Saindo do Programa!\n");
            break;

        default:

            printf("Opcao Invalida!");
            system("pause");
            goto menuPrincipal;
        }
    return 0;
}
