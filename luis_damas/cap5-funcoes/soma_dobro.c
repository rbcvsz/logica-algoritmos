#include <stdio.h>

//Funcao que calcula a soma e o dobro de 2 numeros

int soma(int a, int b){

  return a+b;
}

int dobro(int num){

    return 2*num;
}

int main(){

  int num1, num2, resultado;
  
  printf("Informe 2 numeros: ");
  scanf("%d %d", &num1, &num2);

  resultado = soma(num1, num2);

  printf("Soma: %d\n", resultado);

  printf("Dobro de %d: %d\n", num1, dobro(num1));
  printf("Dobro de %d: %d\n", num2, dobro(num2));

  //printf("%d", dobro(soma(dobro(num1), num2)));
}