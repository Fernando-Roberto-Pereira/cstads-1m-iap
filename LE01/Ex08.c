#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    float t, a;
    printf("Tempo em segundos:\n");
    scanf("%f", &t);
    a = (-9 * pow(t, 2.0)) + (120.0 * t);
    printf("Altura: %f\n", a);
    return 0;
}
