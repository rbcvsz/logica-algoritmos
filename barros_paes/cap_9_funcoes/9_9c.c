#include <stdio.h>

int verifica(int x){

 if (x < 0){
     return 1;
 }
 else {
     return 0;
 }

}

int main(){

    int num, resultado;

    scanf("%d", &num);

    resultado = verifica(num);

    printf("Resultado: %d\n", resultado);

    return 0;
}
