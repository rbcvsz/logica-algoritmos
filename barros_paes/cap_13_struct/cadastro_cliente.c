#include <stdio.h>
#define MASCULINO 0
#define MAX_NOME 500
#define MAX_CPF 15
#define MAX_CLIENTES 15

/*
Array de estruturas que recebe cadastro de clientes,
exibe os dados cadastrados atraves da função imprime() e calcula
a media das idades atraves da funcao media_idades().
*/

struct cliente { //definicao da struct cliente
    int codigo; //gerado automaticamente a partir do laço for
    char nome[MAX_NOME];
    int dia;
    int mes;
    int ano;
    int sexo;
    char cpf[MAX_CPF];
};

float media_idades(struct cliente clientes[], int tam){

    int i, ano_atual = 2021, mes_atual = 4;
    float total_anos = 0, media_idade;

    //calculo das idades
    for(i =1; i <=tam; i++)
    {
        total_anos = ((ano_atual - clientes[i].ano)*12 + (mes_atual - clientes[i].mes))/12.0 + total_anos;
    }

    return total_anos/tam;

    
}

void imprime(struct cliente c){

    // obs: esta funcao nao recebe o indice i!!

    printf("\nCodigo.....: %d", c.codigo);
    printf("\nNome.......: %s", c.nome);
    printf("Data.......: %d/%d/%d", c.dia, c.mes, c.ano);
    printf("\nSexo.......: %d", c.sexo);
    printf("\nCPF........: %s\n", c.cpf);
    
}

int main(){

    struct cliente c[MAX_CLIENTES]; //definicao da variavel 'c' do tipo 'struct cliente'
    int qtd, i;
    float media;

    printf("Informe quantos usuarios deseja cadastrar: ");
    scanf("%d", &qtd);
    
    //cadastrar cliente
    for (i =1; i<=qtd; i++){

        c[i].codigo = i;
        printf("\nNome do cliente: ");
        getchar();
        fgets(c[i].nome, MAX_NOME, stdin);
        printf("> Data de nascimento\n");
        printf("Dia: ");
        scanf("%d", &c[i].dia);
        printf("Mes: ");
        scanf("%d", &c[i].mes);
        printf("Ano: ");
        scanf("%d", &c[i].ano);
        printf("Sexo (0-M, 1-F): ");
        scanf("%d", &c[i].sexo);
        printf("CPF : ");
        getchar();
        fgets(c[i].cpf, MAX_CPF, stdin);

    }

    //imprimir cliente
    for (i =1; i <=qtd; i++)
    {        
        imprime(c[i]);
    }

    //media das idades
    media = media_idades(c, qtd); //passagem da sctruct cliente c como paramentro, junto com o total de alunos cadastrados
    
    printf("\nMedia das idades dos clientes: %.2f\n", media);
    

    return 0;
}
