#include <stdio.h>

void main() {
	int c;
	double max = -999999, min = 999999, a;
	for (c = 0; c < 15; c++) {
		printf("Digite um numero - %i", c+1);
		scanf("%lf", &a);
		if(a > max) {
			max = a;
		}
		if(a < min) {
			min = a;
		}
	}
	printf("Valor MAX: %lf\n", max);
	printf("Valor MIN: %lf\n", min);
}