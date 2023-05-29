#include <stdio.h>

void main() {
	int g;
	double h, r;
	puts("Digite sua altura:");
	scanf("%lf", &h);
	puts("Escolha seu gênero");
	puts("1) Masculino");
	puts("2) Feminino:");
	scanf("%i", &g);

	if (g == 1){
		r = (72.7 * h) - 58.0;
	} else {
		if (g == 2) {
			r = (62.1 * h) - 44.7;
		}
	}
	printf("Peso ideal: %.2lf\n", r);
}
