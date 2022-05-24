#include <stdio.h>
#include <math.h>

int main() 
{
    int valor1,valor2;

    valor1 = (3*5)/4;
    valor2 = pow(3,2)/0.5;


    if (valor1 <= valor2) {
        printf("valor1 = %d e valor2 = %d portanto verdadeiro\n",valor1,valor2);
    } else {
        printf("Falso");
    };

   

   
   return 0;
}