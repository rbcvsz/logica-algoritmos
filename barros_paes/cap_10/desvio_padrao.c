#include <stdio.h>
#include <math.h> // na compilacao, lembrar de adicionar o -lm
#define TAM 8


/* Programa para calculo do desvio padrao

1  ->  Calcular a media dos numeros lidos
2  ->  Calcular a variancia:
2.1  ->  Calcular 'x' para cada valor lido  -->  x = (valor - media)^2
2.2  ->  variancia = (x1 + x2 + ... + xn)/TAM
3  ->  Calcular o desvio padrao: sqrt(variancia, 2);
*/

float media(float vetor[], int tam){

    int i;
    float soma = 0;

    for(i =0; i <tam; i++)
    {
        soma = soma + vetor[i];
    }

    return soma/tam;

}

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

float desvio_padrao(float vetor[], int tam){

    return sqrt(variancia(vetor, tam));

}

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
