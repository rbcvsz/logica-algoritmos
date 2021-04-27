#include <stdio.h>
#define TAM 10

//Ler um array com 10 inteiros e substituir os pares por '1' e os impares por '-1'

int main(){

    int vetor[TAM], i;

    printf("Informe uma sequencia de numeros:\n");

    for (i =0; i <TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i =0; i <TAM; i++)
    {
        if (vetor[i] %2 == 0)
        {
            vetor[i] = 1;
        }
        else 
        {
            vetor[i] = -1;
        }
    }

    
}
