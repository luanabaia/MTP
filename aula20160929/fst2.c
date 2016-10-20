#include <stdio.h>

struct Fracao {
	int num;
	int denomin;
};

struct Fracao soma_fracao(int num_1, int denomin_1, int num_2, int denomin_2);

int main() {
	struct Fracao resp;
	int num_1, denomin_1, num_2, denomin_2;
	printf("Entre com a primeira fracao: ");
	scanf("%d/%d", &num_1, &denomin_1);
	printf("Entre com a primeira fracao: ");
	scanf("%d/%d", &num_2, &denomin_2);
	resp = soma_fracao(num_1, denomin_1, num_2, denomin_2);
	printf("Resposta: %d/%d\n", resp.num, resp.denomin);
	return 0;
}

struct Fracao soma_fracao(int num_1, int denomin_1, int num_2, int denomin_2) {
	struct Fracao resp;
	resp.num = denomin_2*num_1 + denomin_1*num_2;
	resp.denomin = denomin_1*denomin_2;
	return resp;
}
