#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  // char -> 'A', '/n', 100
  // int -> -123, 0, 222
  // float -> -100.123456f, 0.0f, 532.5435345f
  // double -> -1.1234567890123456, 0.0, 2.231312454321321
  // void -> sem tipo
  printf("O tipo de 'char' ocupa %i byte(s)?\n", sizeof(char));
  printf("O tipo de 'int' ocupa %i byte(s)?\n", sizeof(int));
  printf("O tipo de 'float' ocupa %i byte(s)?\n", sizeof(float));
  printf("O tipo de 'double' ocupa %i byte(s)?\n", sizeof(double));
  printf("O tipo de 'void' ocupa %i byte(s)?\n", sizeof(void));
  printf("\n\n\n");
  printf("O VALOR MAXIMO EH:");
  printf("\n\n\n");
  printf("O tipo de 'char' aceita valor de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo de 'int' aceita valor de %i a %i\n", INT_MIN, INT_MAX);
  printf("O tipo de 'float' aceita valor de %E a %E\n", FLT_MIN, FLT_MAX);
  printf("O tipo de 'double' aceita valor de %E a %E\n", DBL_MIN, DBL_MAX);

  return 0;
}
