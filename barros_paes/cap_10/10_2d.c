#include <stdio.h>
#define TAM 10

//Ler um array com 10 numeros reais e imprimir somente os de indice par

int main(){

    int i;
    float vetor[TAM];

    printf("Informe uma sequencia de numeros:\n");

    for (i =0; i <TAM; i++)
    {
        scanf("%f", &vetor[i]);
    }

    printf("Sequencia de numeros cujos indices sao pares:\n");
    for (i =0; i <TAM; i++)
    {
        if (i %2 == 0)
        {
            printf("Valor na posicao %d: %.1f\n", i, vetor[i]);
        }
        
    }

    
}
