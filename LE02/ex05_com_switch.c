#include <stdio.h>
void main() {
	int a;
	float b, c, d;
	printf("----------------------------- \n");
	printf("\t Menu de opções \n");
	printf("----------------------------- \n");
	printf("Código \t Operação aritmética \n");
	printf("1 \t Adição \n");
	printf("2 \t Subtração \n");
	printf("3 \t Multiplicação \n");
	printf("4 \t Divisão \n");
	printf("Escolha uma opção: ");
	scanf("%i", &a);

	switch(a) {
		case 1: {
			printf("Digite dois valores para operação aritmética \n");
			scanf("%f %f", &b, &c);
			d = b + c;
			printf("Resultado= %f \n", d);		
			break;
		}
		case 2: {
			printf("Digite dois valores para operação aritmética \n");
			scanf("%f %f", &b, &c);
			d = b - c;
			printf("Resultado= %f \n", d);		
			break;
		}
		case 3: {
			printf("Digite dois valores para operação aritmética \n");
			scanf("%f %f", &b, &c);
			d = b * c;
			printf("Resultado= %f \n", d);		
			break;
		}
		case 4: {
			printf("Digite dois valores para operação aritmética \n");
			scanf("%f %f", &b, &c);
			d = b / c;
			printf("Resultado= %f \n", d);
			break;
		}
		default : {
			printf("Operação desconhecida \n");			
		}
	}
}
