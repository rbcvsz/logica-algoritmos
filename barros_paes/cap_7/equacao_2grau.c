#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x1, x2, delta;

    printf("Informe os coeficientes da equacao: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("nao eh uma equacao do 2 grau");
    }
    else 
    {
        delta = pow(b, 2) - 4*a*c;
        if (delta < 0)
        {
            printf("nao existem raizes reais");
        }
        else 
        {
            x1 = (-b + sqrt(delta)) / 2*a;
            x2 = (-b - sqrt(delta)) / 2*a;
            printf("Raizes reais da equacao\nx1 = %.2f\nx2 = %.2f", x1, x2);
        }
    }
    

}