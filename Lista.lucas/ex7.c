#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool funcao(int y)
{
    int aux;
    for (int i = 1; i < y - 1; i++)
    {
        if (y % i == 0)
        {
            aux += i;
        }
    }
    if (aux ==y)
    {
        return true;
    }
    return false;
}

int main()
{
    int y;
    printf("digite o numero: \n");
    scanf("%i", &y);
    if (y > 1)
    {
        if (funcao(y) == true)
        {
            printf("numero e perfeito \n");
        }
        if (funcao(y) == false)
        {
            printf("numero nao e perfeito \n");
        }
    }
    else 
    {
        printf("erro!!! \n");
    }

    return 0;
}