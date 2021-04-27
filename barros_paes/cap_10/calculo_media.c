#include <stdio.h>

int main(){

    int i, vetor[3], soma = 0;
    float media;

    for(i =0; i <3; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma/3;

    printf("Media dos numeros informados: %.2f\n", media);

    printf("Numeros informados: ");

    for(i =0; i <3; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
