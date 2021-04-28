#include <stdio.h>

float media(float vetor[], int tam){

    int i;
    float soma = 0;

    for(i =0; i <tam; i++)
    {
        soma = soma + vetor[i];
    }

    return soma/tam;

}
