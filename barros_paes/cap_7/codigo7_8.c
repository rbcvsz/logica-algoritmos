#include <stdio.h>

int main()
{

    float salario;

    printf("Informe salario: ");
    scanf("%f", &salario);

    if (salario <= 1000) 
    {
        salario = salario * 1.15; // 15%
    }
    else if (salario <= 2000)
    {
        salario = salario * 1.10; // 10%
    }
    else 
    {
        salario = salario * 1.05; // 5%
    }

    printf("Novo salario: R$%.2f", salario);

    return 0;
}
