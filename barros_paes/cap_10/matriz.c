#include <stdio.h>
#define LIN 3
#define COL 3

int main(){

    int i, j, matriz[LIN][COL];

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
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
    

}


