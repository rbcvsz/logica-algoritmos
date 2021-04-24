#include <stdio.h>

int main(){

    int num, inicial = 2, achou = 0;

    printf("Informe um numero: ");
    scanf("%d", &num); // primo a ser verificado ex: 11 (nao pode ser divisivel por nenhum numero de 2 ate 11-1)

    while (!achou && inicial < num)
    {
        if ((num % inicial) != 0)
        {
            inicial = inicial +1;
        }
        else
        {
            achou = 1;
        }
        
    }
    
    if (achou > 0) {
        printf("nao e primo, primeiro divisor encontrado: %d", inicial);

    }


}