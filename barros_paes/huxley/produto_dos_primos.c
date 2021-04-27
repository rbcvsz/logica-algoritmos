#include <stdio.h>

/*
Dados 04 números inteiros, calcule o produto entre eles caso 
os 04 números digitados sejam números primos.
Se algum deles não for primo, imprima: SEM PRODUTO
*/

void primo(void){

    int i, j, num, nao_primo = 0, produto = 1;

    for (i =0; i <4; i++)
    {
        //printf("Informe um numero: ");
        scanf("%d", &num);

        for (j =2; j <num; j++)
        {
            if (num % j == 0 && num !=2)
            {
                nao_primo++;
                
            }
        }

        produto = produto * num;
    }
    
    if (nao_primo == 0){
        printf("%d\n", produto);
    }
    else{
        printf("SEM PRODUTO\n");
    }
    
}

int main(){

    
    primo();

    return 0;
}
