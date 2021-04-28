#include <stdio.h>
#include <math.h>

float desvio_padrao(float vetor[], int tam){

    return sqrt(variancia(vetor, tam));

}
