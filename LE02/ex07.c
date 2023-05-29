#include <stdio.h>

void main() {
	int op;
	double a, r;
	puts("Preço normal da etiqueta:");
	scanf("%lf", &a);
	puts("Escolha a opcao");
	puts("1) A vista em dinheiro ou cheque, recebe 10% de desconto");
	puts("2) A vista no cartão de crédito, recebe 5% de desconto");
	puts("3) Em duas vezes, preco normal de etiqueta sem juros");
	puts("4) Em três vezes, preco normal de etiqueta mais juros de 10%:");
	scanf("%i", &op);

	if ((op >= 1) && (op <= 4)) {
		if (op == 1) {
			r = a * 0.9;
		} else if (op == 2) {
			r = a * 0.95;
		} else if (op == 3) {
			r = a;
		} else {
			r = a * 1.1;
		}
		printf("Preco da etiqueta: %.2lf\n", a);
		printf("Preco a pagar: %.2lf\n", r);
	}
}
