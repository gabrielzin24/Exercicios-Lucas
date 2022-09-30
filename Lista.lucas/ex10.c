#include <stdio.h>
#include <stdlib.h>

float funcao(float p, char s)
{
    if (s == 'M')
    {
        return (p * 72.7) - 58;
    }
    if (s == 'F')
    {
        return (p * 62.1) - 44.7;
    }
    else 
    return -1;
}

int main()
{
    float p,aux;
    char op;

    printf("digite qual e sexo(M/F): \n");
    scanf("%c", &op);
    printf("digite qual e altura: \n");
    scanf("%f", &p);

   aux = funcao(p,op);

   printf("seu peso ideal e de: %.2f", aux);

   return 0;
}
