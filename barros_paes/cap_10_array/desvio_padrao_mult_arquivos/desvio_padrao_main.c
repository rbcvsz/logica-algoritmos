#include <stdio.h>
#include <math.h> // na compilacao, lembrar de adicionar o -lm
#define TAM 8
#include "media.h"
#include "variancia.h"
#include "desvio.h"

/* Programa para calculo do desvio padrao

1  ->  Calcular a media dos numeros lidos
2  ->  Calcular a variancia:
2.1  ->  Calcular 'x' para cada valor lido  -->  x = (valor - media)^2
2.2  ->  variancia = (x1 + x2 + ... + xn)/TAM
3  ->  Calcular o desvio padrao: sqrt(variancia, 2);
*/

int main(){

    int i, len = TAM;
    float sequencia[len], resultado;

    printf("Informe uma sequencia de numeros para calculo do desvio padrao:\n");

    for(i =0; i <len; i++)
    {
        scanf("%f", &sequencia[i]);
    }

    resultado = desvio_padrao(sequencia, len);

    printf("Desvio padrao: %f\n", resultado);

    return 0;
}
