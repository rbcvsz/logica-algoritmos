#include <stdio.h>

// funcao que retorna o dobro do maior numero lido

float dobro_do_maior(float x, float y)
{
    float dobro, maior = x;

    if (maior < y)
    {
        maior = y;
    }

    dobro = maior *2;

    //printf("dobro: %.2f\n", dobro);

    return dobro;
}

int main(){
    
    float num1, num2, resultado;

    printf("Informe dois numeros:\n");
    scanf("%f %f", &num1, &num2);
    
    resultado = dobro_do_maior(num1, num2);

    printf("Dobro do maior: %.2f\n", resultado);

    return 0;
}
