#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 == n2)
    {
        if (n2 == n3)
        {
            printf("1");
        }
        else 
        {
            printf("3");
        }
    }
    else if (n1 == n3)
    {
        printf("3");
    }
    else if (n2 == n3)
    {
        printf("3");
    }
    else
    {
        printf("2");
    }
    
	return 0;
}