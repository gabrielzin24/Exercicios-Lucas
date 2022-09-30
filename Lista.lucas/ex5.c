#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct temp
{
    int g;
    int m;
    int S;
}temps;

struct temp tempo (int s)
{
    struct temp temps;
    int aux;
     temps.g = s / 3600;
     aux = s % 3600;
     temps.m = aux / 60;
     temps.S = s - (temps.g*3600 + temps.m*60);

     return temps;
}


int main()
{
    int s;
    struct temp temps;
    printf("digite o tempo em segundos: \n");
    scanf("%i", &s);

    temps = tempo(s);

    printf("%isegundos equivalem a %ig %im %is\n\n",s,temps.g,temps.m,temps.S);

    return 0;

}