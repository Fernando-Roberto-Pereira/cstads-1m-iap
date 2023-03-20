#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    float x1, y1, x2, y2, a, b, c;
    printf("x1:\n");
    scanf("%f", &x1);
    printf("y1:\n");
    scanf("%f", &y1);
    printf("x2:\n");
    scanf("%f", &x2);
    printf("y2:\n");
    scanf("%f", &y2);
    a = x1 - x2;
    b = y1 - y2;
    c = sqrt(pow(a, 2.0) + pow(b, 2.0)); 
    printf("Distancia: %f\n", c);
    return 0;
}
