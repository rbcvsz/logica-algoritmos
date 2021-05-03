#include <stdio.h>

int main(){

    int i, j, k, dia, mes, ano, dataValida;
    char data[11], sDia[3], sMes[3], sAno[5];
    
    /*
    string = [2][2][/][0][1][/][2][0][2][0]
              0  1  2  3  4  5  6  7  8  9
    */

    printf("Informe uma data: ");
    fgets(data, 11, stdin);
    
    // Separacao da string e conversão para int

    //Dia
    for(i =0; data[i] != '/'; i++)
    {
        sDia[i] = data[i];
    }
    dia = atoi(sDia);

    
    printf("valor de i apos o laco: %d", i);
    printf("\nDia: %d", dia);
    
    
    //Mes - o contador do mes (j) começa 1 posição depois que o contador de data (i) termina
    for(i++, j =0; data[i] != '/'; j++, i++)
    {
        sMes[j] = data[i];
    }
    mes = atoi(sMes);

    printf("\nvalor de i apos o laco: %d", i);
    printf("\nvalor de j apos o laco: %d", j);
    printf("\nMes: %d", mes);

    //Ano
    for(i++, k =0; data[i] != '\0'; k++, i++)
    {
        sAno[k] = data[i];
    }
    ano = atoi(sAno);

    // Caso o ano seja informado com somente 2 algarismos. Ex: 21, deve-se somar a 2000:

    if (ano >=0 && ano <100)
    {
        ano = ano +2000;
    }

    printf("\nvalor de i apos o laco: %d", i);
    printf("\nvalor de k apos o laco: %d", j);
    printf("\nAno: %d", ano);

    printf("\nData em inteiro: %d-%d-%d", dia, mes, ano);
    

        
    /* Validação
    Meses de 31 dias: 01, 03, 05, 07, 08, 10, 12
    Meses de 30 dias: 04, 06, 09, 11
    Caso especial: fevereiro 28 dias x 29 dias (bissexto)
    */

    if (ano >= 0 && ano < 10000)
    {
        if (mes >= 1 && mes <13)
        {
            if (dia >= 1 && dia < 32 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
            {
                dataValida = 1;
            }
            else if (dia >= 1 && dia < 31 && mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                dataValida = 1;
            }
            else if (dia >= 1 && dia < 29 && mes == 2)
            {
                dataValida = 1;
            }
            else if (dia == 29 && mes == 2 && (ano % 4 == 0 && ano % 100 != 0)|| ano % 400 == 0)
            {
                dataValida = 1;
            }
            else
            {
                dataValida = 0;
            }        
                        
        }
        else
        {
            dataValida = 0;
        }
    }

    printf("\nData valida: %d\n", dataValida);

    return 0;

}
