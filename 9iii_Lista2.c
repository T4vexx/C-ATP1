#include <stdio.h>


int main()
{
    int data,ano,mes,dia;

    scanf("%d", &data);

    ano = data % 100;

    dia = data/10000; 

    mes = (data / 100) % 100;

    printf("Dia: %d", dia);
    printf("\nMes: %d", mes);
    printf("\nAno: %d", ano);

    return 0; 

}