#include <stdio.h>

int main() {
    int i, fib1 = 1, fib2 = 1, soma, aux;

    printf("Digite o tamanho da fibonacci desejada: ");
    scanf("%d", &aux);

    printf("%d %d",fib1,fib2);

    for (i = 2; i < aux; i++) {                                        
        soma = fib1 + fib2;  

        fib2 = fib1;                           
        fib1 = soma; 

        printf(" %d",soma);                          
    }  


    return 0;
}
