#include <stdio.h>
#include <string.h>
#include <time.h>

int numero_selecionado();

int main()
{
    srand(time(0));
    int numero, numero_sorteado, i;
    printf("\nDigite um numero inteiro de 1 a 10\n\n");
    scanf("%d", &numero);
    numero_sorteado =  rand()%10 + 1;
    printf("\nO numero sorteado foi\n\n%d\n\n", numero_sorteado);
    if(numero == numero_sorteado)
            {
                numero_selecionado();
            }
    else
        printf("Fim do sorteio!\n\n");
    return 0;
}

int numero_selecionado() {
    printf("Parabens!!\n\n");
    return 0;
}
