#include <stdio.h>
#include <stdlib.h>

int expo(int num, int ex)
{
	
	int i, cal = 1;
	
	for(i=1;i<ex + 1;i++)
	{
		cal = cal * num;
	}
	
	return cal;
}

int num, ex;

main()
{
	printf("Digite um numero: ");
	scanf("%i", &num);
	printf("Digite o expoente do numero %i: ", num);
	scanf("%i", &ex);
	
	
	printf("O valor sera: %i", expo(num, ex));
	
	system("pause");
}

