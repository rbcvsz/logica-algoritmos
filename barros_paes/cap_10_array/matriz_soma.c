#include <stdio.h>
#define LIN 3
#define COL 3

//matriz simples 3x3

int main(){

    int i, j, matriz1[LIN][COL], matriz2[LIN][COL], matriz_soma[LIN][COL];

    //Ler matriz 1
    printf("Matriz 1:\n");
    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }

    //Ler matriz 2
    printf("Matriz 2:\n");
    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }

    //Somar as 2 matrizes
    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    printf("Matriz soma:\n");
    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            printf("%d ", matriz_soma[i][j]);
        }
        printf("\n");
    }

    return 0;

}


