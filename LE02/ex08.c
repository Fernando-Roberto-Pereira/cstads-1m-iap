#include <stdio.h>

void main() {
	int dividendo, quociente, resto, soma;
	puts("Digite o ano do seu nascimento:");
	scanf("%i", &dividendo);

	quociente = (int) (dividendo / 100);
	resto = dividendo - (quociente * 100);
	soma = quociente + resto;
	quociente = (int)(soma / 5);
	resto = soma - (quociente * 5);

	if (resto == 0) {
		puts("Timido");
	} else if (resto == 1) {
		puts("Sonhador");
	} else if (resto == 2) {
		puts("Paquerador");
	} else if (resto == 3) {
		puts("Atraente");
	} else {
		puts("Irresistivel");		
	}
}
