#include <stdio.h>
void main() {
	int a;
	float b, c;
	printf("Digite o valor da etiqueta \nR$ ");
	scanf("%f", &b);
	printf("----------------------------- \n");
	printf("\t Menu de opcoes \n");
	printf("----------------------------- \n");
	printf("Codigo \t Condicao de pagamento \n");
	printf("1 \t A vista em dinheiro ou cheque, recebe desconto de 10\x025 \n");
	printf("2 \t A vista no cartao de credito, recebe desconto de 5\x025 \n");
	printf("3 \t Em duas vezes, preço normal de etiqueta sem juros \n");
	printf("4 \t Em tres vezes, preço normal de etiqueta mais juros de 10\x025 \n");
	printf("Escolha uma opcao: ");
	scanf("%i", &a);

	switch(a) {
		case 1: {
			c = b * 0.9;
			printf("Valor do produto R$ %f, desconto de 10\x025 \n", c);		
			break;
		}
		case 2: {
			c = b * 0.95;
			printf("Valor do produto R$ %f, desconto de 5\x025 \n", c);		
			break;
		}
		case 3: {
			c = b / 2;
			printf("Valor da parcela do produto R$ %f, em duas vezes sem juros \n", c);		
			break;
		}
		case 4: {
			c = (b * 1.1) / 3.0;
			printf("Valor da parcela do produto R$ %f, tres vezes com juros de 10\x025 \n", c);		
			break;
		}
		default : {
			printf("Operacao desconhecida \n");			
		}
	}
}
