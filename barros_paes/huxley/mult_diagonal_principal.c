#include <stdio.h>
#define LIN 4
#define COL 4


int main(){

    int i, j, matriz[LIN][COL], k;

    printf("Informe o valor da constante: ");
    scanf("%d", &k);

    printf("Elementos da matriz:\n");

    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            if (i == j)
            {
                matriz[i][j] = matriz[i][j]*k;
            }
        }
    }

    printf("Matriz (diagonal principal x k):\n");

    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            printf("%d ", matriz[i][j]);          
        }
        printf("\n");
    }


    
    return 0;
}
