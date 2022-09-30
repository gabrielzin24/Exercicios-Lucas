#include <stdio.h>
#include <stdlib.h>

float calcul(int num)
{
	int i;
	float s = 0;
	
	for(i=1;i<num + 1;i++)
	{
		s = s + (i*i + 1 * 1.0)/(i + 3);
	}
	
	return s;
}

int num;

main()
{
	printf("Digite um valor inteiro positivo: ");
	scanf("%i", &num);
	
	printf("\nO valor de S e: %.4f\n\n", calcul(num));
	
	system("pause");
}
