#include <stdio.h>
#define TAM 5

void pares(int v[], int tam){

    int i;

    for (i =0; i <tam; i++)
    {
        if(v[i] % 2 == 0)
        {
            printf("Par: %d\n", v[i]);
        }
    } 
}

int main(){

    int i, vetor[TAM];

    printf("Informe uma sequencia de inteiros:\n");
    for (i =0; i <TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    pares(vetor, TAM);

    return 0;

}
