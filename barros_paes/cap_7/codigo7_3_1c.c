#include <stdio.h>

int main()
{
    int num;
    
    printf("informe um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("par");
    }
    else 
    {
        printf("impar");
    }
}