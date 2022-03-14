#include <stdio.h>

int maior_2(int a, int b){

  int maior;

  maior = a;

  if(b > maior){
    maior = b;
  }

  return maior;
}

int main(){

  int num1, num2, res;

  printf("Informe 2 numeros: ");
  scanf("%d %d", &num1, &num2);

  res = maior_2(num1, num2);

  printf("Maior: %d", res);
}