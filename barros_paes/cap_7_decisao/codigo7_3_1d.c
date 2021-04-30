#include <stdio.h>

int main()
{
    int num;

    printf("informe um numero inteiro: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("multiplo de 5");
    }
    else
    {
        printf("nao eh multiplo de 5");
    }
}