#include <stdio.h>

int main() {
  printf( "- - - - - - - - - - - - - - - - - |\n" );
  printf( "|     N O T A   L E G A L         |\n" );
  printf( "| - - - - - - - - - - - - - - - - |\n" );
  printf( "| Item           Qtd     Prc      Valor  |\n" );
  printf( "| %-16s %03i %6.2f %7.2f |\n","Caneta Azul",2,  2.0,  4.0 );
  printf( "| %-16s %03i %6.2f %7.2f |\n","Borracha",1,5.00,   5.00 );
  printf( "| %-16s %03i %6.2f %7.2f |\n","Resma de papel",1,10.0,  10.00 );
  printf( "- - - - - - - - - - - - - - - - - \n" );
  printf( "  TOTAL: R$ %6.2f\n", 19.00);
  return 0;
}
