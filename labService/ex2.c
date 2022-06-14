#include <stdio.h>

int main() {
    float num,salario;

    printf("Digite o salario que sera reajustado: ");
    scanf("%f", &num);
 
    if(num <= 1000) {
        salario = num * 1.30;
    } else if(num > 1000 && num <= 1300) {
        salario = num * 1.25;
    } else if(num > 1300 && num <= 2600) {
        salario = num * 1.20;
    } else if(num > 2600 && num <= 4000) {
        salario = num * 1.15;
    } else {
        salario = num * 1.10;
    }

    printf("O antigo salrio era %f e o atualizado e %.2f\n", num, salario);

    return 0;
}