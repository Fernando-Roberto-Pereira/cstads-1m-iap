#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, d;
    printf("Distancia percorrida em quilometros:\n");
    scanf("%f", &d);
    r = d * 100000.0; // 1km = 1000 mestros * 1 metro = 100 centimetros
    printf("Distancia em centimetros: %f\n", r);
    return 0;
}
