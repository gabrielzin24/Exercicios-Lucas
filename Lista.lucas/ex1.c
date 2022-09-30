#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(float j)
{
    float g;
    g = 4/3* 3,1415 *pow(j,3);
    return g;
}

int main()
{
    float j, k;
    printf("digite o raio da esfera: \n");
    scanf("%f", &j);

    k = volume(j);
    printf("o volume da esfera e: %.1f\n", k);
    return 0;
}