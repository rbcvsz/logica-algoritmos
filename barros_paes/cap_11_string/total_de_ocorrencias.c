#include <stdio.h>
#define TAM 500

//programa que le uma string e um caractere qualquer, e retorna o total de ocorrencias desse caractere

int main(){

    int i = 0, total = 0;
    char frase[TAM+1];
    char letra; //como 'letra' recebe apenas 1 caractere, nao precisa especificar tamanho

    printf("Informe uma frase: ");
    fgets(frase, TAM+1, stdin);

    printf("Informe um caractere: ");
    letra = getchar(); //funcao getchar() recebe apenas um caractere na variavel letra

    while (frase[i] != '\0') //enquanto caractere na posicao 'i' nao identificar fim da string
    {
        if(frase[i] != '\n') //se o caractere nao identificar quebra de linha
        {   
            if (frase[i] == letra) //compare o caractere na posicao 'i' com a letra informada na entrada
            {
                total++; //incrementa toda vez que tiver uma ocorrencia do caracter lido na string
            }
        }
        i++;
    }

    printf("Total de vezes que '%c' apareceu: %d\n", letra, total);

    return 0;
}
