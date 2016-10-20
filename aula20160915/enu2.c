#include <stdio.h>

typedef
enum Mes {
janeiro = 1,
fevereiro = 2,
marco = 3,
abril = 4,
maio = 5,
junho = 6,
julho = 7,
agosto = 8,
setembro = 9,
outubro = 10,
novembro = 11,
dezembro = 12,
} Meses;


int main()
{
    int mes = 0;
    printf("Digite o numero do mes em que voce nasceu\n\n");
    scanf("%d", &mes);
    printf("\nVoce nasceu no mes de: \n\n");
    switch (mes)
    {
    case janeiro:
        printf("Janeiro\n");
        break;
    case fevereiro:
        printf("Fevereiro\n");
        break;
    case marco:
        printf("Marco\n");
        break;
    case abril:
        printf("Abril\n");
        break;
    case maio:
        printf("Maio\n");
        break;
    case junho:
        printf("Junho\n");
        break;
    case julho:
        printf("Julho\n");
        break;
    case agosto:
        printf("Agosto\n");
        break;
    case setembro:
        printf("Setembro\n");
        break;
    case outubro:
        printf("Outubro\n");
        break;
     case novembro:
        printf("Novembro\n");
        break;
    case dezembro:
        printf("Dezembro\n");
        break;
    }
 return 0;
    }
