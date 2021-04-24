#include <stdio.h>

int main(){

    int hora;

    printf("informe a hora: ");
    scanf("%d", &hora);

    if (hora < 0 || hora >= 24){
        printf("hora invalida");
    }
    else if ((hora >= 18 && hora < 24) || (hora >=1 && hora < 5)){
        printf("escuro");
    }
}