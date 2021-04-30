#include <stdio.h>

//contador para imprimir os numeros impares de 1 ate 20

int main(){

    int contador = 0;

    while (contador <= 20)
    {
        if ((contador % 2) != 0)
        {
            printf("%d\n", contador);            
        }
        contador = contador +1;
    }

    return 0;
}