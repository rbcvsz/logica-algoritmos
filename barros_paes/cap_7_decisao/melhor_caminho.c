#include <stdio.h>

// exercicio 7.27 pagina 101

int main(){

    int caminho;

    printf("escolha um caminho:\n");
    scanf("%d", &caminho);

    if (caminho == 1)
    {
        printf("proximo: ");
        scanf("%d", &caminho);

        if (caminho == 4)
        {
            printf("proximo: ");
            scanf("%d", &caminho);

            if (caminho == 6)
            {
                printf("caminho valido, destino alcancado!");
            }
            else printf("caminho invalido");
        }
        else 
        {
            printf("caminho invalido");
        }
    }
    else if (caminho == 2)
    {
        printf("caminho valido, mas destino nao alcancado");
    }
    else if (caminho == 3)
    {
        printf("proximo: ");
        scanf("%d", &caminho);

        if (caminho == 5)
        {
            printf("proximo: ");
            scanf("%d", &caminho);

            if (caminho == 7)
            {
                printf("proximo: ");
                scanf("%d", &caminho);

                if (caminho == 8)
                {
                    printf("caminho valido, destino alcancado");
                }
                else 
                {
                    printf("caminho invalido");
                }
            }
            else 
            {
                printf("caminho invalido");
            }
        }
        else 
        {
            printf("caminho invalido");
        }
    }
    else 
    {
        printf("caminho invalido");
    }

    return 0;
}