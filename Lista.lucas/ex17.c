#include <stdio.h>

int calc_maior();
int calc_menor();

int main() {
  
  printf("O maior numero e %i e o menor e %i", calc_maior(), calc_menor());
  
  return 0;
}

int calc_maior() {
  int i=0, valor, maior;

  printf("Digite o 1o numero:");
  scanf("%i", &valor);

  maior = valor;
  
  for(i=1;i<=4;i++) {
    printf("Digite o %io numero: ",i+1);
    scanf("%i", &valor);
     if (valor > maior) {
      maior = valor;
       }
  }
  return maior;
}

int calc_menor() {
  int i=0, valor, menor;

  printf("Digite o 1o numero:");
  scanf("%i", &valor);

  menor = valor;
  
  for(i=1;i<=4;i++) {
    printf("Digite o %io numero: ",i+1);
    scanf("%i", &valor);
     if (valor < menor) {
      menor = valor;
       }
  }
  return menor;
}
