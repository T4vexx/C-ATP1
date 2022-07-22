#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define m 5

int main() {
    float C[m][m] = {{7.03,14.87,26.41,9.18,27.05},{24.26,21.14,11.89,22.74,31.62},{22.4,12,29.8,24.06,27.23},{19,16.04,18.81,9.62,13.05},{24.66,22.01,26,28.2,28.56}};
    float M[m] = {0,0,0,0,0},Tur[m]={0,0,0,0,0},soma=0,p_total=0,tur_total=0,ter_total=0,nova_cidade=0,p_exedente=0,final=0;
    
    //A)
    for (int i=0; i<m;i++) {
        for (int j=0; j<m; j++) {
            printf("Cidade %d Zona %d = %.2f ",i+1,j+1,C[i][j]);
            soma = soma + C[i][j];
            if(soma > 110) {
                M[i] = soma - 110; 
                Tur[i] = 110;
            } else {
                Tur[i] = soma;
            }
            p_total = p_total + C[i][j];
        }
        printf("\n");
        soma=0;
    }

    //B)
    for (int i=0; i<m; i++) {
        if (M[i] != 0) {
            printf("\nO exedente na cidade %d foi de %.2f",i+1,M[i]);
        } else {
            printf("\nNao houve exedente na cidade %d",i+1);
        }
    }

    //C.1)
    printf("\nA potencia total de todas as cidades e %.2fMW",p_total);
    //C.2)
    for (int i=0; i<m; i++) {
        tur_total = tur_total + Tur[i];
    }
    printf("\nA potencia total de todas as turbinas e %.2fMW",tur_total);
    //C.3)
    for (int i=0; i<m; i++) {
        ter_total = ter_total + M[i];
    }
    printf("\nA potencia total de todas as termoeletricas e %.2fMW",ter_total);
    
    //D.1)
    printf("\n\nDigite a potencia da nova cidade...: ");
    fflush(stdin);
    scanf("%f", &nova_cidade);

    soma = 0;
    for (int i=0; i<m;i++) {
        for (int j=0; j<m; j++) {
            soma = soma + C[i][j];
            if(j == 4) {
                if(soma < 110) {
                    p_exedente = p_exedente + (110-soma);
                } 
            }
        }
        soma = 0;
    }
    printf("\nA potência exedente foi %.2f",p_exedente);

    //D.2)
    final = p_exedente - nova_cidade;
    if (final >= 0) {
       printf("\nPotência da cidade adicionada: %.2f Mw",nova_cidade); 
    } else {
        printf("\nHá uma sobrecarga de -final: %.2f Mw",final); 
    }

    return 0;
}