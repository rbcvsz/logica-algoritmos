#include <stdio.h>
#define TAM 5

// ordenacao de array decrescente

int main(){

    int i, j, vetor[TAM], aux;

    for (i =0; i <TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    
    

    for(i =0; i <TAM; i++)
        for(j =i; j <TAM; j++)
        {
            if(vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }

    printf("\nSequencia ordenada:\n", vetor[i]);

    for (i =0; i <TAM; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
}
