#include <stdio.h>

int main(){

    int num1, num2, num3, menor;

    printf("informe 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    menor = num1;

    if (num2 < menor)
    {
        menor = num2;
    }
    if (num3 < menor)
    {
        menor = num3;
    }

    printf("menor numero = %d", menor);

    return 0;
}