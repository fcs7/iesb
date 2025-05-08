#include <stdio.h>

int main(){
    int numero1 = 10;
    int numero2 = 20;

    int soma = numero1 + numero2;
    printf("A soma do %i e %i = %i\n", numero1, numero2, soma);

    int subtracao = numero1 - numero2;
    printf("A subtracao do %i e %i = %i\n", numero1, numero2, subtracao);

    int multiplicacao = numero1 * numero2;
    printf("A multiplicacao de %i e %i = %i\n", numero1,numero2,multiplicacao);

    float divisao = numero1 / numero2;
    printf("A divisao de %i e %i\n", numero1, numero2,divisao);

    int resto = numero1 % numero2;
    printf("O resto de %i e %i = %i\n", numero1, numero2,resto);


    int operacao = 1 / 2 + 5 * 4 % 1 - 2;
    printf("A Operacao 1 / 2 + 5 * 4 %% 1 - 2 = %i\n", operacao);
    operacao = 1 / 2 + 5 * 4 % 1 -2;
    printf("A operacao eh:", operacao);
return 0;
}