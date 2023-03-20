#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    float f, c, j, m;
    printf("Capital:\n");
    scanf("%f", &c);
    printf("Taxa de juros:\n");
    scanf("%f", &j);
    printf("Periodo de aplicacao:\n");
    scanf("%f", &m);
    f = c * pow(1.0 + (j / 100.0), m);
    printf("Resultado: %f\n", f);
    return 0;
}
