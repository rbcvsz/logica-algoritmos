#include <stdio.h>

int main(){

    int contador = 0, n;

    printf("Informe o numero de elementos: ");
    scanf("%d", &n);

    while (contador < 2*n)
    {
        printf("Eu adoro programar\n");
        contador = contador +1;
    }

}