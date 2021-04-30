#include <stdio.h>
#define TAM 500

int main(){

    //programa que le uma string e retorna o seu tamanho

    int contador = 0, i=0;
    char frase[TAM+1];

    printf("Informe uma frase: ");
    fgets(frase, TAM+1, stdin);

    while(frase[i] != '\0')
    {
        if(frase[i] != '\n')
        {
            contador++;
        }
        i++;
    }

    printf("Tamanho: %d\n", contador);
    
    return 0;
}
