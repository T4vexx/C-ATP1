#include <stdio.h>
#include <stdlib.h>

void ex6() {
    int num,fat=1,n1;

    printf("Digite um numero para ser caculado o fatorial: ");
    scanf("%d", &num);

    n1=num;

    for (int i = 0; i < n1; i++) {
        fat = fat * num;
        num--;
    }

    printf("Fatorial e: %d",fat);
}

void ex7() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i<=10; i++) {
        printf("%d x %d = %d\n", i,num,i*num);
    }
}

void ex8() {
    int aux;

    for ( int i = 1; i <= 200; i++) {
        aux = i/4;
        if ( i < 4) {
            
        } else if (aux * 4 != i) {
            
        } else {
            printf("\n%d e divisivel", i);
        }
    }
}

void ex9() {
    int i, fib1 = 1, fib2 = 1, soma;   

    printf("%d %d",fib1,fib2);

    for (i = 2; i < 15; i++) {                                        
        soma = fib1 + fib2;  

        fib1 = fib2;                           
        fib2 = soma; 

        printf(" %ds",soma);                          
    } 

}

void ex10() {   
    int soma=0;

    for (int i = 1; i <= 500; i++) {
        if ( (i/2) * 2 == i ) {
            soma = i + soma;
        }
    }

    printf("%d", soma);
}

void ex15_DesafioA() {

    for (int i = 0; i < 7; i++) {
        printf("lancamento: %d | lancamento: %d | lancamento: %d \n", 1 + rand() % 6, 1 + rand() % 6, 1 + rand() % 6);
    }
}

void ex15_DesafioB() {
    srand(time(NULL));

    for (int i = 0; i < 7; i++) {
        printf("lancamento: %d | lancamento: %d | lancamento: %d \n", 1 + rand() % 6, 1 + rand() % 6, 1 + rand() % 6);
    }
}

void ex15_DesafioC() {
    int aux,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;

    srand(time(NULL));

    for (int i = 0; i < 6000; i++) {
        aux = 1 + rand() % 6;

        switch (aux) {
            case 1:
                n1++;
                break;
            case 2:
                n2++;
                break;
            case 3:
                n3++;
                break;
            case 4:
                n4++;
                break;
            case 5:
                n5++;
                break;
            case 6:
                n6++;
                break;
        }
    }

    printf("Face1: %d vezes, Face2: %d vezes, Face3: %d vezes, Face4: %d vezes, Face5: %d vezes, Face6: %d vezes",n1,n2,n3,n4,n5,n6);
}

void ex15_DesafioD() {
    int dia,mes,ano;
    char mes_formated[12];

    printf("Digite uma data formada DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia,&mes,&ano);

    switch (mes) {
        case 1 ... 12:
            mes_formated = 'Janeiro';
    }

    printf("%d de %s de %d", dia,mes_formated,ano);
}

int main() {

    ex15_DesafioD();

    return 0;
}