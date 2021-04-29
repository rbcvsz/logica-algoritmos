#include <stdio.h>
#define TAM 500

/*
Ler uma string e copiar o seu conteudo invertido em outro array.
Por exemplo, se a string for "PROGRAMAR", deve imprimir "RAMARGORP"
*/

int main(){

    char frase[TAM+1], invertida[TAM+1];
    int i=0, contador =0;

    printf("Informe uma frase: ");
    fgets(frase, TAM+1, stdin);

    while(frase[i] != '\0')
    {
        if(frase[i] != '\n')
        {
            contador++; //para retornar o total de caracteres da frase. Util para saber ate onde vai a string
        }
        i++;
    }

    printf("\nFrase lida:\n");

    for(i =0; i <= contador; i++)
    {
        printf("%c", frase[i]); //imprime a frase normal
    }

    printf("Frase invertida: ");

    for(i =contador; i >= 0; i--)
    {
        invertida[i] = frase[i];
        printf("%c", invertida[i]); //imprime a frase ao contrario
    }

    printf("\n");

    
    return 0;
}
