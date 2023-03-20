#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prestacao, acrescimo, desconto;
    printf("Valor da prestacao:\n");
    scanf("%f", &prestacao);
    acrescimo = (prestacao * 1.1) - prestacao;
    desconto = acrescimo * 0.9;
    prestacao += desconto;
    printf("Acrescimo: %f\n", acrescimo);
    printf("Desconto: %f\n", desconto);
    printf("Valor final: %f\n", prestacao);
    return 0;
}
