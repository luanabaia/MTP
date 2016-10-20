#include <stdio.h>

struct Fracao {
	int numerador;
	int denominador;
};

struct Fracao soma_fracao(int numerador1, int denominador1, int numerador2, int denominador2);

int main() {
	struct Fracao resposta;
	int numerador1, denominador1, numerador2, denominador2;
	printf("Entre com a primeira fracao: ");
	scanf("%d/%d", &numerador1, &denominador1);
	printf("Entre com a primeira fracao: ");
	scanf("%d/%d", &numerador2, &denominador2);
	resposta = soma_fracao(numerador1, denominador1, numerador2, denominador2);
	printf("Resposta: %d/%d\n", resposta.numerador, resposta.denominador);
	return 0;
}

struct Fracao soma_fracao(int numerador1, int denominador1, int numerador2, int denominador2) {
	struct Fracao resposta;
	resposta.numerador = denominador2*numerador1 + denominador1*numerador2;
	resposta.denominador = denominador1*denominador2;
	return resposta;
}
