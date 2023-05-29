#include <stdio.h>

void main() {
	int op;
	double a, r;
	puts("Preço normal da etiqueta:");
	scanf("%lf", &a);
	puts("Escolha a opção");
	puts("1) À vista em dinheiro ou cheque, recebe 10% de desconto");
	puts("2) À vista no cartão de crédito, recebe 5% de desconto");
	puts("3) Em duas vezes, preço normal de etiqueta sem juros");
	puts("4) Em três vezes, preço normal de etiqueta mais juros de 10%:");
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
		printf("Preço da etiqueta: %.2lf\n", a);
		printf("Preço a pagar: %.2lf\n", r);
	}
}
