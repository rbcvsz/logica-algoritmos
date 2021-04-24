#include <stdio.h>

/*
Faça um programa que leia três notas (valores reais) de um aluno, 
calcule sua média aritmética e imprima uma mensagem dizendo se o 
aluno foi aprovado, reprovado ou deverá fazer prova final. 
O critério de aprovação é o seguinte: 

Aprovado (média >= 7);
Reprovado (média < 3);
Prova final ( 3 <= média < 7).
*/

int main(){

    float nota1, nota2, nota3, media;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media >= 7)
    {
        printf("aprovado");
    }
    else if (media < 3)
    {
        printf("reprovado");
    }
    else printf("prova final");

}