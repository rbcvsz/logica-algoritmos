#include <stdio.h>
#define TAM 500

int main(){

    //programa que le uma string e retorna a quantidade de vogais

    int contador = 0, i=0;
    char frase[TAM+1];

    printf("Informe uma frase: ");
    fgets(frase, TAM+1, stdin);

    while(frase[i] != '\0')
    {
        if(frase[i] != '\n')
        {
            if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                contador++;
            }
        }
        i++;
    }

    printf("Total de vogais: %d\n", contador);
    
    return 0;
}
