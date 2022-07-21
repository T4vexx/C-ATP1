#include <stdio.h>

#define N 30
// A[2][3] matriz com 2 linhas e 3 colunas
/*
           0  |   1
    0| A[0][0]  A[0][1] |
    1| A[1][0]  A[1][1] |
*/

void ex1() {
    int A[2][2],det;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Insira o valor ");
            scanf("%d", &A[i][j]);
        }

    }

    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    printf("\tDeterminante = %d\n",det);
}

void ex2() {
    int A[3][4],S[3]={0,0,0},maior,menor;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Insira o valor que esta na linha %d e na coluna %d ",i,j);
            scanf("%d", &A[i][j]);
        }
    }


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(i==0 && j==0) {
                maior = A[i][j];
                menor = A[i][j];
            } else {
                if(A[i][j] > maior) {
                    maior = A[i][j];
                }
                if(A[i][j] < menor) {
                    menor = A[i][j]; 
                }
            }
            // if(i==0) {
            //     linha1 = linha1 + A[i][j];
            // } else if(i==1) {
            //     linha2 = linha3 + A[i][j];
            // } else {
            //     linha3 = linha3 + A[i][j];
            // }
            S[i] = S[i] + A[i][j];
        }
    }

    system("clear");

    printf("Maior e: %d e o menor e: %d\n",maior,menor);

    for(int i = 0; i<3; i++) {
        printf("Soma da linha %d = %d\n",i,S[i]);
    }
}

void ex3() {
    int i,j,pascal[N][N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j<=i; j++) {
            if(j==0 || i==j) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }  
}

int main() {
    ex3();

    return 0;
}