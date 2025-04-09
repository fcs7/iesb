#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (){ 
  //unsigned char -> 0 a 255
  //unsigned int -> 0 a 4bi

  // short int -> -32mil a 32mil
  //unsigned short int -> 0 a 65mil

  // long int -> -nonilhao a +nonilhao
  //unsigned long int -> 0 ~ 18lhao 
 
  //long double -> quase 0 a um numero que nao pronunciar

  printf("O tipo 'short int' ocupa %i bytes\n", sizeof(short int));
  printf("O tipo 'long int' ocupa %i bytes\n", sizeof(long int));
  printf("O tipo 'long double' ocupa %i bytes\n", sizeof(long double));
  printf("O tipo 'unsigned char' vai de 0 a %i\n", UCHAR_MAX);
  printf("O tipo 'unsigned int' vai de 0 a %i\n", UINT_MAX );


  printf("O tipo 'short int' vai de 0 a %i\n", LONG_MIN, LONG_MAX);
  printf("O tipo 'unsigned short int' vai de 0 a %i bytes\n", USHRT_MAX );
  
  printf("O tipo 'long init' vai de %i a %i\n", LONG_MIN, LONG_MAX);
  printf("O tipo 'unsigned long int' vai de 0 a %li\n", ULONG_MAX);
  
  printf("O tipo 'long double' vai de 0 a %i\n", LDBL_MIN, LDBL_MAX);
  return 0;
}

