#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    float r, n1, n2, n3, n4, n5;
    printf("Digite 5 valores numéricos!\n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
    r = (n1 + n2 + n3 + n4 + n5);
    r = pow(r, (1.0/4.0));
    printf("Resultado: %f\n", r);
    return 0;
}
