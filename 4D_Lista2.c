#include <stdio.h>
#include <math.h>

int main() 
{
    int valor1,valor2;

    valor1 = 2+8%7;
    valor2 = 3*6-15;

    
    if (valor1 >= valor2) {
        printf("valor1 = %d e valor2 = %d portanto verdadeiro\n",valor1,valor2);
    } else {
        printf("Falso");
    };

   

   
   return 0;
}