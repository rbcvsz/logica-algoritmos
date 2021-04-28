#include <stdio.h>

float variancia(float vetor[], int tam){

    int i;
    float m, variancia =0;
    
    m = media(vetor, tam); //chama a funcao media

    for(i =0; i <tam; i++)
    {
        variancia += (vetor[i] - m)*(vetor[i] - m);
    }

    return variancia/8;
}
