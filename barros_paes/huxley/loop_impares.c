#include <stdio.h>

int main(){

    //imprimir todos os numeros impares entre n e m (nessa ordem)*

    int n, m, aux, contador;

    scanf("%d %d", &n, &m);

    if (n > m) // *ordenar
    {
        aux = n;
        n = m;
        m = aux;
    }

    contador = n;

    while (contador <= m)
    {
        if ((contador % 2) != 0)
        {
            printf("%d\n", contador);
        }
        
        contador++;
    }

    return 0;
}