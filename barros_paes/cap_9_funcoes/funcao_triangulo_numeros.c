#include <stdio.h>

void imprime_linha(int tamanho){

    int i;

    for(i =0; i <tamanho; i++)
    {  
        printf("%d", tamanho);
    }

}

int main(){

    int num, j;

    printf("Informe quantas linhas deseja imprimir: ");
    scanf("%d", &num);

    for (j =1; j <=num; j++)
    {
        imprime_linha(j);
        printf("\n");
    }
    

    return 0;

}
