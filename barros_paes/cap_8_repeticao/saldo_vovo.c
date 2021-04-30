#include <stdio.h>
#include <math.h>

//obs: compilou corretamente, mas deu erro no Huxley

int main(){

 int N, i; 
 int S, total = 0;
 int pot;

    scanf("%d %d", &N, &S);

    //total = S;

    pot = pow(10,5);

    if (N >=1 && N <= 30)
        if ((S >= -pot) || (S >= pot))
        {
            for (i=1; i<=N; i++)
            {
                total = total + S;
                scanf("%d", &S);
            }

        }

    printf("%d", total);

    return 0;
}

