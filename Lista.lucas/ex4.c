#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct raizes
{
    int s1;
    int s2;
} raiz;

struct raizes bhaskara(int a, int b, int c)
{
    struct raizes raiz;
    int delta;
    delta = (pow(b, 2)) - 4*a*c;
    if (delta < 0)
    {
        printf("erro !!!\n");
        return raiz;
    }

    raiz.s1 = (-b + sqrt(delta)) / (2 * a);
    raiz.s2 = (-b - sqrt(delta)) / (2 * a);

    return raiz;
}

int main()
{
    int a, b ,c;
    struct raizes raiz;
    printf("digite a: \n");
    scanf("%i", &a);
    printf("digite b: \n");
    scanf("%i", &b);
    printf("digite c: \n");
    scanf("%i", &c);

    raiz=bhaskara(a,b,c);

    printf("raiz 1: %i \n", raiz.s1);
    printf("raiz 2: %i \n", raiz.s2);

    return 0;
}