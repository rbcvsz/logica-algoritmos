#include <stdio.h>

// Funcao que ordena tres numeros de forma crescente

void troca(int *x, int *y){

    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){

    int num1, num2, num3, aux;

    printf("Informe 3 numeros inteiros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 || num1 > num3) //num1 é maior de qualquer jeito se cair nesta condicao
    {
        if (num2 < num3)
        {
            troca(&num1, &num2);
        }
        else 
        {
            troca(&num1, &num3);
        }
    }

    if(num2 > num3)
    {
        troca(&num2, &num3);
    }

    printf("%d %d %d\n", num1, num2, num3);

    return 0;

}
