#include <stdio.h>

void main() {
	int dividendo, quociente, resto;
	puts("Digite um numero");
	scanf("%i", &dividendo);

	quociente = (int)(dividendo / 2);
	resto = dividendo - (quociente * 2);

	if (resto == 0) {
		puts("Par");
	} else {
		puts("Impar");
	}	
}
