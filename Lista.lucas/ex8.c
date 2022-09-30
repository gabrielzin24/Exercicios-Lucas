#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool positivo(int a)
{
    if (a > 0)
    {
        return true;
    }

    return false;
}

int main()
{
    int a;
    printf("digite o numero: \n");
     scanf("%i", &a);


    
    if (positivo(a) == true)
    {
        printf("o numero e positivo");
    }
    if (positivo(a) == false)
    {
        printf("o numero e negativo");
    }
    if(a==0)
    {
        printf("zero!!!");
    }
    return 0;
}