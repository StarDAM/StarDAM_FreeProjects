#include <stdlib.h>
#include <stdio.h>
#define MAX 10

  void solicita(char Word[MAX]){

      printf("Introduce datos:");
      scanf("%99[^\n]", &Word[0]);
  }
  void calcula(char Word[MAX]){
  
  }

  int main(){
      
    char Word[MAX];


    //menu();
    solicita(Word);
    //calcula(Word);
    //imprime(Word);

      return EXIT_SUCCESS;
  }
