#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

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
    int i, fib1 = 1, fib2 = 0, soma;   

    printf("%d ",fib1);

    for (i = 1; i < 15; i++) {                                        
        soma = fib1 + fib2;  

        fib2 = fib1;                           
        fib1 = soma; 

        printf("%d ",soma);                          
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

void ex12() {
    char sexo;
    int n_mulheres=0,n_homens=0;
    float altura,max_homem=0,min_homem=0,max_mulher=0,min_mulher=0,soma_a_mulher=0;

    for (int i=0; i<4; i++) {
        do {
            printf("Digite o sexo da pessoa: F ou M ");
            fflush(stdin);
            scanf("%c", &sexo);
        } while (sexo != 'F' && sexo != 'M');

        do {
            printf("Digite a altura: ");
            fflush(stdin);
            scanf("%f",&altura);
        } while (altura<=0 || altura>3);

        if( sexo == 'F') {
            if (n_mulheres == 0) {
                max_mulher=altura;
                min_mulher=altura;

                soma_a_mulher=altura;
            } else {
                if (altura > max_mulher) {
                    max_mulher=altura;
                } 
                if(altura < min_mulher) {
                    min_mulher=altura;
                }
                soma_a_mulher = soma_a_mulher + altura;
            }
            n_mulheres++;
        } else {
            if (n_homens == 0) {
                max_homem=altura;
                min_homem=altura;
            } else {
                if (altura > max_homem) {
                    max_homem=altura;
                } 
                if(altura < min_homem) {
                    min_homem=altura;
                }
            }  
            n_homens++;
        }

    }

    printf("Maximo e minimo homens: Maior %f, Menor %f\n", max_homem, min_homem);
    printf("Maximo e minimo mulheres: Maior %f, Menor %f\n", max_mulher, min_mulher);
    printf("A media da altura das mulheres é: %f\n", soma_a_mulher/n_mulheres);
    printf("Numero de homens %d, Porcentagem de homens %.2f", n_homens, (float)n_homens/(n_homens+n_mulheres)*100);
}

void ex14_Desafio() {
    int cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0,choice,total;
    do {
        system("clear");
      	printf ("\n\n\t\t---Programa Eleição presidencial---");
		printf("\n\n\t\t <1> Candidato 1");
		printf("\n\t\t <2> Candidato 2");
		printf("\n\t\t <3> Candidato 3");
		printf("\n\t\t <4> Candidato 4");
		printf("\n\t\t <5> Nulo");
		printf("\n\t\t <6> Branco");
		printf("\n\n\t\t <0> Encerrar");
        do {
            printf("\n\t Escolha uma opção: ");
            scanf("%d", &choice);

            if (choice > 6 || choice < 0 ) {
                printf("\nEntrada invalida\ntente novamente:\n");
            }

        } while (choice > 6 || choice < 0);
        

        switch (choice) {
            case 1: 
                cand1++;
                break;
            case 2: 
                cand2++;
                break;
            case 3: 
                cand3++;
                break;
            case 4: 
                cand4++;
                break;
            case 5: 
                nulo++;
                break;
            case 6: 
                branco++;
                break;
        }

    } while (choice != 0);

    total = cand1+cand2+cand3+cand4+nulo+branco;

    printf("Total de votos de cand1: %d, cand2: %d, cand3: %d, cand4: %d, nulo: %d, branco: %d", cand1,cand2,cand3,cand4,nulo,branco);
    printf("\nPercentual de nulos: %.2f%%, de brancos: %.2f%%", (float)nulo/total*100, (float)branco/total*100);
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
        case 1:
            strcpy(mes_formated, "Janeiro"); break;
        case 2:
            strcpy(mes_formated, "Fevereiro"); break;
        case 3:
            strcpy(mes_formated, "Marco"); break;
        case 4:
            strcpy(mes_formated, "Abril"); break;
        case 5:
            strcpy(mes_formated, "Maio"); break;
        case 6:
            strcpy(mes_formated, "Junho"); break;
        case 7:
            strcpy(mes_formated, "Julho"); break;
        case 8:
            strcpy(mes_formated, "Agosto"); break;
        case 9:
            strcpy(mes_formated, "Setembro"); break;
        case 10:
            strcpy(mes_formated, "Outubro"); break;
        case 11:
            strcpy(mes_formated, "Novembro"); break;
        case 12:
            strcpy(mes_formated, "Dezembro"); break;
        default:
            strcpy(mes_formated, "Invalid"); break;
    }

    printf("%d de %s de %d", dia,mes_formated,ano);
}

int main() {
    setlocale(LC_ALL,"portuguese");

    ex9();

    return 0;
}