#include <stdio.h>

// funcao que retorna o maior numero dentre 3 lidos

int maior(int x, int y)
{
    int maior = x;

    if (maior < y)
    {
        maior = y;
    }

    return maior;
}

int main(){
    
    int num1, num2, num3, resultado;

    printf("Informe tres numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    resultado = maior(maior(num1, num2), num3);
    
    printf("Maior: %d\n", resultado);

    return 0;
}
