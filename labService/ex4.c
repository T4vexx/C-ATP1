#include <stdio.h>
#include <math.h>

int main() {
    int Num,n1,fat=1;
    float Xis,Result=1;

    printf("Digite um numero para o calculo de seu exponencial: ");
    scanf("%f",&Xis);

    printf("\nDigite um numero interio para a aproximação do exponencial: ");
    scanf("%d",&Num);

    for (int i = 0; i <= Num; i++) {
        n1=i;
        fat=1;
        for (int j = 0; j < i; j++) {
            fat = fat * n1;
            n1--;
        }
        Result = Result + ((pow(Xis,i))/fat);

    }   

    printf("o exponencial de %f e %f\n", Xis,exp(Xis));
    printf("2o exponencial de %f e %f", Xis,Result);


    return 0;
}
