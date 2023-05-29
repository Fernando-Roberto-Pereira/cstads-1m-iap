#include <stdio.h>

void main() {
	double salario, reajuste;
	puts("Qual o valor do salario");
	scanf("%lf", &salario);
	if (salario < 500.0) {
		reajuste = salario * 1.15;
	} else if (salario <= 1000.0) {
		reajuste = salario * 1.1;
	} else {
		reajuste = salario * 1.05;
	}
	printf("Salario reajustado= %lf\n", reajuste);
}


