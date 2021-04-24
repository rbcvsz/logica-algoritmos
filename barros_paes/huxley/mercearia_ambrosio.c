#include <stdio.h.>

/*
Ambrósio é amigo da vizinhança e resolveu dar descontos para agradar seus clientes. 
A mercearia de Ambrósio contém apenas 04 itens, cujos preços são dados pela tabela abaixo:
A regra de desconto é bem simples: se a quantidade de produtos comprados for igual ou maior 
que quinze, então o desconto é concedido. O desconto também é concedido caso o valor total 
da compra seja maior ou igual a 40 reais. O valor do desconto é de 15%.
Sua missão é fazer um programa que leia o código do produto, a quantidade comprada e imprima o valor que o cliente deve pagar, já considerando o desconto quando aplicável.
Considere que o cliente só pode comprar um único tipo produto cada vez que usar o seu software.
*/

int main(){

    int codigo, quantidade;
    float preco, total, desconto;
    
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
       
    if (codigo == 1)
    {
        preco = 5.30;
    }
    if (codigo == 2)
    {
        preco = 6.00;
    }
    if (codigo == 3)
    {
        preco = 3.20;
    }
    if (codigo == 4)
    {
        preco = 2.50;
    }

    
    total = preco * quantidade;
    desconto = total - (total*0.15);

    if (quantidade >= 15)
    {
        printf("R$ %.2f\n", desconto);
    }
    else if (total >= 40)
    {
        printf("R$ %.2f\n", desconto);
    }
    else
    {
        printf("R$ %.2f\n", total);
    }
   

    return 0;
}