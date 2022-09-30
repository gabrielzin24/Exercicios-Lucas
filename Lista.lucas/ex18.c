#include <stdlib.h>
#include <stdio.h>

int num, i;

main()
{
	printf("Digite um valor inteiro: ");
	scanf("%i", &num);
	
	for(i=1;i<num+1;i++)
	{
		printf("%i X %i = %i\n", i, num, i*num);
	}
	
	system("pause");
}


