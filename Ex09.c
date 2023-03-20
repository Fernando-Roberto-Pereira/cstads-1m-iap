#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    float a, b, c, delta, x1, x2, z;
    printf("A:\n");
    scanf("%f", &a);
    printf("B:\n");
    scanf("%f", &b);
    printf("C:\n");
    scanf("%f", &c);
    delta = pow(b, 2.0) - 4.0 * a * c;
    z = (2.0 * a);
    x1 = (-b + sqrt(delta)) / z;
    x2 = (-b - sqrt(delta)) / z;
    printf("x1: %f\n", x1);
    printf("x2: %f\n", x2);
    return 0;
}
