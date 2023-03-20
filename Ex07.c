#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    int d;
    float b;
    printf("Numero de dias:\n");
    scanf("%i", &d);
    b = pow(2.0, (d * 24)/12);
    printf("Numero de bacterias: %f\n", b);
    return 0;
}
