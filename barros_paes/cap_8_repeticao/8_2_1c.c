#include <stdio.h>

//imprimir todos os numeros pares entre n e m

int main(){

    int n, m, aux, i;

    printf("Informe dois numeros:\n");
    scanf("%d %d", &n, &m);

    if (n > m) //verifica e ordena crescente
    {
        aux = n;
        n = m;
        m = aux;
    }

    for (i = n; i<= m; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    

    return 0;
}
