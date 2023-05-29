#include <stdio.h>

void main() {
	int a, r;
	puts("Digite seu ano de nascimento:");
	scanf("%i", &a);
	r = 2022 - a;
	printf("Voce tem: %i anos\n", r);
	if (r >= 16) {
		puts("Voce pode votar");

		if (r >= 18) {
			puts("Voce pode ter carteira de habilitacao");
		}
	}
}
