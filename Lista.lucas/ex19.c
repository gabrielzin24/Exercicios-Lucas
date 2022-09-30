#include <stdio.h>
#include <stdlib.h>

int divisor(int num)
{
	int i, div = 0;
	
	for(i=num;i>0;i--)
	{
		if(num%i == 0)
			div++;
	}
	
	return div;
}

int num;

main()
{
	printf("Digite um numero inteiro: ");
	scanf("%i", &num);
	
	printf("\nA quantidade de divisores do numero %i e: %i\n\n", num, divisor(num));
	
	system("pause");
}
