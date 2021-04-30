#include <stdio.h>

// Funcao que troca dois valores por meio de ponteiro

void troca(int *a, int *b){ // as variaveis 'a' e 'b' vao receber os '&x' e '&y'

    int aux; // variavel auxiliar da troca;

    aux = *a;
    *a = *b;
    *b = aux;

}


int main(){

    int x, y;

    x = 5;
    y = 2;

    printf("Valores antes da troca:\nx = %d\ny = %d\n", x, y);

    troca(&x, &y);

    printf("Valores apos a troca:\nx = %d\ny = %d\n", x, y);

    return 0;
}
