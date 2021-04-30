#include <stdio.h>

// funcao que retorna o maior numero dentre 2 lidos

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
    
    int num1, num2, resultado;

    printf("Informe dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    
    resultado = maior(num1, num2);

    printf("Maior: %d\n", resultado);

    return 0;
}
