#include <stdio.h>

int main(){
    int numero;

    printf("Informe um numero inteiro:");
    scanf("%i", &numero);
    printf("O numero informado foi %i\n", numero);


    float nota;
    printf("Informa uma nota de 0.0 a 10.0:\n ");
    scanf("%f",&nota); 
    printf("A sua nota foi %.lf\n",nota);
    
    return 0;
}