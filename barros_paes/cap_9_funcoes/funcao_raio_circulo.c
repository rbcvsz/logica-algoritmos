#include <stdio.h>
#include <math.h> //pi pode ser obtido por meio da constante 'M_PI'

//OBSERVACAO: PARA USAR A BIBLIOTECA math.h, o seu programa com a opção -lm: 'gcc meu_programa.c -lm'


float area(float raio)
{
    return M_PI*pow(raio, 2); //area circulo = pi*r^2
}

int main(){

    float resultado, raio;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);
    
    resultado = area(raio);

    printf("Area do circulo: %.2f\n", resultado);

    return 0;
}
