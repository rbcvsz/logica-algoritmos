#include <stdio.h>

int main(){

    int num1, num2, num3, maior;

    printf("ler 3 numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    maior = num1;

    if (num2 > maior)
    {
        if (num2 > num3)
        {
            maior = num2;
        }
        else
        {
            maior = num3;
        }
    }
    else if (num3 > maior)
    {
        if (num3 > num2)
        {
            maior = num3;
        }
        else
        {
            maior = num2;
        }
    }
    
    printf("maior = %d", maior);

}
