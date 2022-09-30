#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool logic(int h)
{
    int i;
    for (i = 2; i < h-1 ; i++)
    {
        if (h % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int h;
    printf("digite o numero: \n");
    scanf("%i", &h);

    if (h > 0)
    {
        if (logic(h))
        {
            printf("valor do primo");
        }
        else
        {
            printf("nao e primo o valor");
        }
    }
    else
    {
        printf("erro!");
        return 1;
    }
    return 0;
}
