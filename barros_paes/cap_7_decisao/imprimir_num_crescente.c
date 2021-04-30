#include <stdio.h>

//programa para imprimir dois numeros em ordem crescente

int main(){

    int num1, num2, aux;

    printf("informe 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){

        // troca de valor com variavel auxiliar
        aux = num1;
        num1 = num2;
        num2 = aux;

    }

    printf("Numeros ordenados: %d, %d", num1, num2);

}