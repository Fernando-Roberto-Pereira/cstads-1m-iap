#include <stdio.h>
#include <stdlib.h>
#include <math.h> // adicionei a biblioteca math para utilizar a funcao pow

int main()
{
    const float PI = 3.1415;
    float r, v;
    printf("Raio:\n");
    scanf("%f", &r);
    v = (4.0 * PI * pow(r, 3.0)) / 3.0;
    printf("Volume: %f\n", v);
    return 0;
}
