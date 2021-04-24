#include <stdio.h>
#include <math.h>

int main(){

    int num, a, b, soma, pot;

    scanf("%d", &num);
    
    while (!(num < 1000 || num > 9999))
    {
        
        a = num/100;
        b = num%100;
        soma = a + b;
        //pot = pow(soma,2);
                
        if (soma*soma == num)
        {
            printf("propriedade do 3025!\n");
        }
        else 
        {
            printf("numero comum\n");
        }

        scanf("%d", &num);

       
    }

    return 0;

}
