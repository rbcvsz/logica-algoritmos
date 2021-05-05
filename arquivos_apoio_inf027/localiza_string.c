#include <stdio.h>

int main(){

    int i, j, achou = 0, qtd_str = 12, qtd_busca = 4;
    char frase[12] = "o rato roeu", busca[30] = "rato";

    /*
    012345678910
    o rato roe u
    */
   
    for (i=0; i < qtd_str; i++)
    {
        for (j =0; j < qtd_busca; j++)
        {
            if (busca[j] == frase[i+1])
            {
                achou++;
            }
        }   
    }
    
    printf("achou: %d\n", achou);
    
    return 0;


}