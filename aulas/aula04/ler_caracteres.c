#include <stdio.h>

int main(){
    char tecla;
    printf("Pressione uma tecla e depois de ENTER:");
    scanf("%c", &tecla); //


    getchar();
    printf("Voce pressionou a tecla '%c'\n", tecla );

    printf("Pressione outra tecla: \n" );
    scanf("%c", &tecla); //
    printf("Voce pressionou a tecla '%c'\n", tecla );
    
    getchar();

    char nome[31];
    printf("Informe seu:");
    scanf("%[^\n]s", nome);
    printf("Ola %s!\n", nome );
    return 0;
}