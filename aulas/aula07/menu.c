#include <stdio.h>
#include <stdlib.h>

int main(){
  int opcao =0;

  while(opcao != 4){
    system("clear");
    printf("---------------------\n");
    printf("|   MEU JOGO        |\n");
    printf("---------------------\n");
    printf("|                     |\n");
    printf("|                     |\n");
    printf("|     1 - Novo Jogo   |\n");
    printf("|     2 - Ver Score   |\n");
    printf("|     3 - Score       |\n");
    printf("|     4 - Sair        |\n");
    printf("|                     |\n");
    printf("|                     |\n");
    printf("---------------------\n");
    printf("Escolha uma opcao >\n:");
    scanf("%i",&opcao);
    
    while(getchar() != '\n');

  switch(opcao) {
        case 1:{
          int nivel = 0;
          system("clear");
          printf("Novo Jogo\n\n");
          printf("Escolha um nivel");
          printf("1 - Facil\n");
          printf("2 - Medio\n");
          printf("3 - Dificil\n");
          printf("%i", &nivel);
        break;
      }
        case 2:{
          system("clear");
        printf("Score do Jogo\n\n");
        printf("1 - Jogador A - 10000 pontos\n");
        printf("2 - Jogador B -  1000 pontos\n");
        printf("3 - Jogador C -   100 pontos\n");
        printf("4 - Jogador D -    10 pontos\n");
        printf("5 - Jogador E -     1 pontos\n");
        while(getchar() != '\n');
      }
        case 3:{
          system("clear");
        printf("Sobre o jogo\n\n");
        printf("Desenvolvido em C\n");
        printf("Por um Programador Raiz\n");
        printf("Pressione ENTER para continuar...");
        while(getchar() != '\n');
        break;
      }
        case 4:{
          system("clear");
        printf("Ate logo!\n");
        break;
      }

    }
  }
}
