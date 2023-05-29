#include <stdio.h>

void main() {
	int op;
	puts("Escolha a opção");
	puts("1) Adição");
	puts("2) Subtração");
	puts("3) Multiplicação");
	puts("4) Divisão:");
	scanf("%i", &op);

	if ((op >= 1) && (op <= 4)) {
		double a, b, r;
		puts("Digite dois valores:");
		scanf("%lf %lf", &a, &b);

		if (op == 1) {
			r = a + b;
		} else if (op == 2) {
			r = a - b;
		} else if (op == 3) {
			r = a * b;
		} else {
			r = a / b;
		}
		printf("Resultado: %.2lf\n", r);
	} else {
		puts("Operação desconhecida");		
	}	
}