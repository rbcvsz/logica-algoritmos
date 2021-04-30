#include <stdio.h>

/*
Premissa: ponteiro é uma variável que recebe um endereço de memoria.
Um ponteiro é uma variável como qualquer outra, só que o seu valor representa um endereço de memória.
Uma das operações possiveis com ponteiros é acessar o valor do endereço de memória que ele aponta.
Se a variavel ponteiro 'p' aponta para o endereco de memoria 'D1E2F3', que é hipoteticamente a posicao
da variavel 'x', pode-se dizer que 'p' aponta para 'x'.
Logo, para acessar o valor de 'x' a partir de 'p', pode-se usar o operador '*'. 
*/


int main(){

    int x;
    int *p;

    x = 5;

    p = &x; //atribuicao do endereco da variavel inteiro 'x' na variavel ponteiro 'p'
    
    printf("\nx = %d        atribuicao de um valor inteiro a 'x'\n", x);
    printf("p = %p          atribuicao do endereco de memoria de 'x' ao ponteiro 'p' (p = &x)\n", p);
    printf("*p = %d         artificio para acessar o valor de 'x' atraves de 'p' (*p)\n", (*p));
    printf("Obs: considerar '=' como igual e nao atribuir\n\n");

    return 0;
}
