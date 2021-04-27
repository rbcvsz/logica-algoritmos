#include <stdio.h>
#define TAM 3

// ler 10 numeros, e verificar quantas vezes um numero determinado apareceu

int main(){

    int vetor[TAM], i, num, ctd = 0;

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

}
