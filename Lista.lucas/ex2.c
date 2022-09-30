#include <stdio.h>

double medias(double c1, double c2, double c3, char op)
{
    double media;

    if(op == 'B')
        media = (c1 + c2 + c3)/3;
    else if(op == 'K')
        media = (c1 * 0.5) + (c2 * 0.3) + (c3 * 0.2);
    else if(op == 'H')
        media = 3 / (1/c1 + 1/c2 + 1/c3);
    else {
      printf("\nErro");
      return -1.0;
    }

    return media;
}


int main(void) {
    char op;
    double c1, c2, c3, md;

    printf("Digite o tipo de media o valor das 3 notas  |B / K / H|: ");
    scanf("%c%lf%lf%lf", &op, &c1, &c2, &c3);

    md = medias(c1,c2,c3,op);

    if (md != -1.0)
        printf("A media das notas %.2f, %.2f, %.2f sera de: %.2f", c1, c2, c3, md);

    return 0;
}