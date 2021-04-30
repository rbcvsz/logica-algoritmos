#include <stdio.h>
#define TAM 3

/* ler 10 numeros, e verificar quantas vezes um numero determinado apareceu
e em qual posicao apareceu o maior valor
*/

int main(){

    int vetor[TAM], i, num, ctd = 0, maior;

    printf("Informe uma sequencia de numeros:\n");
    for(i =0; i <TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Informe qual numero deseja buscar: ");
    scanf("%d", &num);

    for(i =0; i <TAM; i++)
    {
        if (num == vetor[i])
        {
            ctd++;
        }
    }

    printf("O numero %d apareceu %d vezes\n", num, ctd);

    maior = vetor[0];

    for(i =0; i <TAM; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    } 

    for(i =0; i <TAM; i++)
    {
        if (vetor[i] == maior)
        {
            printf("Maior valor %d na posicao %d\n", maior, i+1);
        }

    } 
    
}
