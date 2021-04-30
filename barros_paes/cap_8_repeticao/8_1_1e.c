#include <stdio.h>

// programa para ler 2 inteiros e imprimir todos os numeros no intervalo entre os numeros

int main(){

    int num1, num2, aux, contador;

    printf("informe 2 numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) //condicional caso os numeros estejam em ordem decrescente
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    contador = num1 + 1; // 4 - 8 {5,6,7}

    while (contador < num2)
    {
        printf("%d\n", contador);
        contador = contador +1;

    }


}
