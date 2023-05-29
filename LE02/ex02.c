#include <stdio.h>

void main() {
	float n1, n2, n3, ma;
	printf("Digite as tres notas \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	ma = (n1 + n2 + n3) / 3.0;

	if (ma <= 3.0) {
		printf("Reprovado, com media= %.1f \n", ma);	
	} else if (ma <= 7.0) {
		printf("Exame, com media= %.1f \n", ma);	
	} else if (ma <= 10.0) {
		printf("Aprovado, com media= %.1f \n", ma);	
	}
}
