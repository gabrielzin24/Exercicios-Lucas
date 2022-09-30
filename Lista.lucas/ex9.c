#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funcao(int t)
{
    if (t % 2 == 0)
        return true;
    return false;
}

int main()
{
    int t;
    printf("digite o numero: \n");
    scanf("%i", &t);

        if (funcao(t) == true)
    {
        printf("o valor e par");
    }

    if (funcao(t) == false)
    {
        printf("o valor e impar");
    }
    return 0;
}