#include <stdio.h>
#include <stdlib.h>

float triangulo(float x, float y, float z)
{
	int i, flag = 0, igual = 0;
	float valores[3];
	
	valores[0] = x;
	valores[1] = y;
	valores[2] = z;
	
	if(x >= y + z)
	{
		flag = 1;
	}
	
	if(y >= x + z)
	{
		flag = 1;
	}
	
	if(z >= x + y)
	{
		flag = 1;
	}
	
	if(flag == 0)
	{
		for(i=0;i<3;i++)
		{
			if(valores[i] == valores[i+1])
			{
				igual++;
			}
		}
		
		if(igual == 0)
			return printf("\nTriangulo Escaleno\n\n");
		if(igual == 1)
			return printf("\nTriangulo Isosceles\n\n");
		if(igual == 2)
			return printf("\nTriangulo Equilatero\n\n");
	}
	
	else 
		return printf("\nNao formara um triangulo\n\n");
}

float x, y, z;

main()
{
	printf("Digite o valor de x, y e z: ");
	scanf("%f %f %f", &x, &y, &z);
	
	printf("%c", triangulo(x,y,z));
	
	system("pause");
}
