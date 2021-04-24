#include <stdio.h.>

/*
Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:

1 (Se todos os números são iguais)
2 (Se todos os números são diferentes)
3 (Se apenas dois números são iguais)
*/

int main(){

    int n1, n2, n3;

    printf("informe tres numeros inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 == n2)
    {
        if (n2 == n3)
        {
            printf("1");
        }
        else 
        {
            printf("3");
        }
    }
    else if (n1 == n3)
    {
        printf("3");
    }
    else if (n2 == n3)
    {
        printf("3");
    }
    else
    {
        printf("2");
    }
}