#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR 32

int id = 0; // id unico para produto/venda
int prod = 0;
int vend = 0;

typedef struct xprod
{
	char nome[CHAR];
	int codigo_produto;
	float preco;
} Produto;

typedef struct xvend {
	int codigo_venda;
	int qtde_prod;
	int * codigo_produto;
	int * quantidade;
} Venda;

void imprimeMenu();
Produto * incluiProduto(Produto * meus_produtos);
Produto * excluiProduto(Produto * meus_produtos);
Produto * buscaProduto(Produto * meus_produtos, int id);
void consultaProdutos(Produto * meus_produtos);
Venda * incluiVenda(Venda * minhas_vendas, Produto * meus_produtos);
Venda * excluiVenda(Venda * minhas_vendas, Produto * meus_produtos);
void consultaVendas(Venda * minhas_vendas,  Produto * meus_produtos);
void recebe(char tipo, void * endereco);
void recebeSTR(char * endereco, int n);

int main() {
	int opc, i;
	Produto * meus_produtos = NULL;
	Venda * minhas_vendas = NULL;
	do {
		imprimeMenu();
		recebe('i', &opc);
		switch(opc) {
			case 1:
			meus_produtos = incluiProduto(meus_produtos);
			break;
			case 2:
			meus_produtos = excluiProduto(meus_produtos);
			break;
			case 3:
			consultaProdutos(meus_produtos);
			break;
			case 4:
			minhas_vendas = incluiVenda(minhas_vendas, meus_produtos);
			break;
			case 5:
			minhas_vendas = excluiVenda(minhas_vendas, meus_produtos);
			break;
			case 6:
			consultaVendas(minhas_vendas, meus_produtos);
			break;
		}
	} while(opc < 7);

	free(meus_produtos);
	for(i = 0; i < vend; i++) {
		free(minhas_vendas[i].codigo_produto);
		free(minhas_vendas[i].quantidade);
	}
	free(minhas_vendas);
	return 0;
}

void imprimeMenu()
{
	printf("******************************\n");
	printf("\n** Produto **\n");
	printf ("\n1 - Incluir\t");
	printf ("\n2 - Excluir\t");
	printf ("\n3 - Consultar\n");
	printf("\n** Venda **\n");
	printf ("\n4 - Incluir\t");
	printf ("\n5 - Excluir\t");
	printf ("\n6 - Consultar\n");
	printf("\n** Outros **\n");
	printf ("\n7 - Sair\n");
	printf("******************************\n");
}

Produto * incluiProduto(Produto * meus_produtos)
{
	int ultimo = prod;
	prod++;
	if(meus_produtos == NULL)
		meus_produtos = (Produto *) malloc(sizeof(Produto));
	else
		meus_produtos = (Produto *) realloc(meus_produtos, prod*sizeof(Produto));
	id++;
	meus_produtos[ultimo].codigo_produto = id;
	printf("\nEntre com o nome do produto: ");
	recebeSTR(meus_produtos[ultimo].nome, CHAR);
	printf("\nEntre com o preco: ");
	recebe('f', &(meus_produtos[ultimo].preco));
	return meus_produtos;
}

Produto * excluiProduto(Produto * meus_produtos)
{
	int i, cod, nprod = 0;
	Produto * aux;
	aux = (Produto *) malloc(prod*sizeof(Produto));
	consultaProdutos(meus_produtos);
	printf("\nQual codigo deseja excluir? ");
	recebe('i', &cod);
	for(i = 0, nprod = 0; i < prod; i++)
		if(meus_produtos[i].codigo_produto != cod)
            {
                aux[nprod] = meus_produtos[i];
                nprod++;
		}
	aux = (Produto *) realloc(aux, nprod*sizeof(Produto));
	free(meus_produtos);
	prod = nprod;
	return aux;
}

Produto * buscaProduto(Produto * meus_produtos, int id)
{
	int i;
	Produto * produto = NULL;
	for(i = 0; i < prod; i++)
        {
            if(meus_produtos[i].codigo_produto == id)
			produto = meus_produtos + i;
	}
	return produto;
}

void consultaProdutos(Produto * meus_produtos)
{
	int i;
	printf("*** \nProdutos (%d) ***\n\n", prod);
	for(i = 0; i < prod; i++) {
		printf("\nCodigo: %d\t", meus_produtos[i].codigo_produto);
		printf("\nNome: %s\t", meus_produtos[i].nome);
		printf("\nPreco: R$ %.2f\n", meus_produtos[i].preco);
	}
	printf("\n");
}

Venda * incluiVenda(Venda * minhas_vendas, Produto * meus_produtos)
{
	char opc;
	int ultimo = vend, nprod;
	vend++;
	if(minhas_vendas == NULL)
		minhas_vendas = (Venda *) malloc(sizeof(Venda));
	else
		minhas_vendas = (Venda *) realloc(minhas_vendas,
			vend*sizeof(Venda));
	id++;
	minhas_vendas[ultimo].codigo_venda = id;
	minhas_vendas[ultimo].qtde_prod = 0;
	minhas_vendas[ultimo].codigo_produto = NULL;
	minhas_vendas[ultimo].quantidade = NULL;
	do {
		nprod = minhas_vendas[ultimo].qtde_prod;
		if(minhas_vendas[ultimo].codigo_produto == NULL)
            {
                minhas_vendas[ultimo].codigo_produto = (int *) malloc(sizeof(int));
                minhas_vendas[ultimo].quantidade = (int *) malloc(sizeof(int));
		}
		else
		{
			minhas_vendas[ultimo].codigo_produto = (int *) realloc(minhas_vendas[ultimo].codigo_produto, (nprod + 1)*sizeof(int));
			minhas_vendas[ultimo].quantidade = (int *) realloc(minhas_vendas[ultimo].quantidade, (nprod + 1)*sizeof(int));
		}
		minhas_vendas[ultimo].qtde_prod++;
		consultaProdutos(meus_produtos);
		printf("\nEntre com o codigo do produto: ");
		recebe('i', &(minhas_vendas[ultimo].codigo_produto[nprod]));
		printf("\nEntre com a quantidade: ");
		recebe('i', &(minhas_vendas[ultimo].quantidade[nprod]));
		printf("\nMais um? (N - nao; S - sim): ");
		recebe('c', &opc);
	} while(opc != 'n' && opc != 'N');
	return minhas_vendas;
}

Venda * excluiVenda(Venda * minhas_vendas, Produto * meus_produtos)
{
	int i, cod, nvend = 0;
	Venda * aux;
	aux = (Venda *) malloc(vend*sizeof(Venda));
	consultaVendas(minhas_vendas, meus_produtos);
	printf("\nQual codigo deseja excluir? ");
	recebe('i', &cod);
	for(i = 0, nvend = 0; i < vend; i++) {
		if(minhas_vendas[i].codigo_venda != cod)
            {
                aux[nvend] = minhas_vendas[i];
                nvend++;
            }
		else
		{
			free(minhas_vendas[i].codigo_produto);
			free(minhas_vendas[i].quantidade);
		}
	}
	aux = (Venda *) realloc(aux, nvend*sizeof(Venda));
	free(minhas_vendas);
	vend = nvend;
	return aux;
}

void consultaVendas(Venda * minhas_vendas, Produto * meus_produtos)
{
	int i, j;
	float subtotal, soma;
	Produto * prod;
	printf("\n*** Vendas (%d) ***\n\n", vend);
	for(i = 0; i < vend; i++)
        {
            soma = 0.f;
            printf("\nCodigo: %d (%d produtos)\n", minhas_vendas[i].codigo_venda, minhas_vendas[i].qtde_prod);
            for(j = 0; j < minhas_vendas[i].qtde_prod; j++)
            {
                prod = buscaProduto(meus_produtos, minhas_vendas[i].codigo_produto[j]);
                printf("\nNome: %s\t", prod->nome);
                printf("\nQuantidade: %d\t", minhas_vendas[i].quantidade[j]);
                subtotal = minhas_vendas[i].quantidade[j] * prod->preco;
                printf("\nTotal: R$ %.2f\n", subtotal);
                soma += subtotal;
		}
		printf("\nTotal da venda: R$ %.2f\n\n", soma);
	}
}

void recebe(char tipo, void * endereco)
{
    int c;
    switch(tipo)
    {
        case 'i': scanf("%d",(int*) endereco); break;
        case 'f': scanf("%f",(float*) endereco); break;
        case 'd': scanf("%lf",(double*) endereco); break;
        case 'c': scanf("%c",(char*) endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
}

void recebeSTR(char * endereco, int n)
{
    fgets(endereco, n, stdin);
    if(endereco[strlen(endereco)-1] == 10)
       endereco[strlen(endereco)-1] = '\0';
}
