#include <stdio.h>

//Funcao que imprime * na tela

void linha(int n){

  int i;

  for(i=0; i<n; i++){
    printf("*");
  }
  printf("\n");
}

int main(){

  linha(3);
  linha(5);
  linha(7);
  linha(5);
  linha(3);
  
}