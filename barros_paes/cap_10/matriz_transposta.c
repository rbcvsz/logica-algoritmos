#define LIN 3
#define COL 2

//matriz simples 3x3

int main(){

    int i, j, matriz[LIN][COL];

    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Matriz:\n");

    for(i =0; i <LIN; i++)
    {
        for(j =0; j <COL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");

    for(i =0; i <COL; i++)
    {
        for(j =0; j <LIN; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;

}

