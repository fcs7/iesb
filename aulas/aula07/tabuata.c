#include <stdio.h>

int main(){

  int numero = 0;
  
  while (numero < 1 || numero > 10) {
    printf("Entre com um numero inteiro de 1 a 10: ");
    scanf("%i", &numero);
   while (getchar() != '\n');
  }
   /*
     printf("A tabuada de %i:\n",numero);
  for( int i=1; i <= 10000; i++ ) {
    printf("%i x %i = %i\n",i,numero, i * numero);}
  printf("---------------------------------------\n");
  for( int i=10; i>=1;i--){
    printf("%i x %i = %i\n",i,numero, i * numero);}
  
  
  return 0;
  }
