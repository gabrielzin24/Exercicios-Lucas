#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int idade(int f, int r, int d)
{
    return f * 365 + r * 30 + d;
}

int main()
{

    int f, r, d ,D ;
    printf("A idade da pessoa em anos meses e dias: \n");
    scanf("%i%i%i",&f,&r,&d);
    D  = idade(f,r,d);
    printf("%i anos %i meses %i dias corresponder a: %i dias \n",f,r,d,D);

    return 0;


}