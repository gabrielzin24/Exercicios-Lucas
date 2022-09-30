#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int flag =1, filhos, p = 0, menors = 0;
float salario, medsal, medfil, maiors;
char so;

main()
{
	while(so != 'N')
	{
		printf("Digite o salario e numero de filhos: ");
		scanf("%f %i", &salario, & filhos);
		
		medsal = medsal + salario;
		medfil = medfil + filhos;
		p++;
		
		if(salario > maiors)
			maiors = salario;
		if(salario <= 350)
			menors++;
		
		printf("\n");
		
		printf("Deseja continuar (S/N) ?: ");
		so = toupper(getche());
		
		printf("\n\n");
		
	}
	
	printf("\nA media salarial dessa(s) %i pessoa(s) e: %.2f R$\n", p, medsal/p);
	printf("\nA media de filho(s) dessa(s) %i pessoa(s) e: %.2f\n", p, medfil/p);
	printf("\nO maior salario e de: %.2f R$\n", maiors);
	printf("\nO percentual de pessoas que ganham ate 350 R$ e de %.2f por cento\n", (menors * 1.0/p) * 100);
	
	system("pause");
}
