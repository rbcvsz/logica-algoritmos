#include <stdio.h>
#define P '#'

//funcao que imprime uma cidade de caracteres

void parede(int p)
{
    int i;

    for (i =0; i<=p; i++)
    {
        printf("%c", P);
    }
    printf("\n");
}

void casa(int n)
{
    parede(n-1);
    parede(n-1);
    parede(n);
    parede(n);
    parede(n-1);
    parede(n-1);
}

int main(){

    int tam, qtd, i;

    printf("Informe o tamanho da parede: ");
    scanf("%d", &tam);

    printf("Informe quantas casas deseja imprimir: ");
    scanf("%d", &qtd);

    for (i =1; i <=qtd; i++)
    {
        casa(tam);
        printf("\n");
    }
    

    return 0;
}
