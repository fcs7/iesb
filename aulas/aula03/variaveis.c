#include <stdio.h>

int main (){
  char tecla;
    tecla = 'A';
    printf("Tecla = %c\n\n", tecla);
  

    tecla = 100;
    printf("Tecla = %c\n", tecla);

  int numero = 10;
    printf("Numero = %i\n", numero);

  {

    int numero= 20;
    printf("Numero = %i\n\n", numero);
  }

  float media_aritmedica = 9.5f;
  printf("Media = %.1f\n", media_aritmedica);

  double dizima =2.33333333333333333333333333333333333333333333;
  printf("Dizima = %.8f\n", dizima);
  return 0;
}
