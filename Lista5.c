#include <stdio.h>
#include <stdlib.h>

void ex1() {
    /*
        a) v[x+1] = v[3] = 3       b) v[x+2]  = v[4] = 10      C) v[x+3] = v[5] = 9
        d) v[y*1] = v[4] = 10      e) v[x*3]  = v[6] = 1       f) v[x*2] = v[4] = 10
        g) v[x*5] = v[10] = "ERRO" h) v[v[6]] = v[1] = 6       i) v[x+y] = v[6] = 1
        j) v[8-8] = v[0] = 2       k) v[v[4]] = v[10] = "ERRO" l) v[v[v[7]]] = v[v[21]] = v["ERRO"] = "ERRO"
        m) v[v[1]*v[4]] = v[6*10] = v[60] = "ERRO" n) v[x+4] = v[6] = 1
    */
}

void ex2() {
    int v[1000], pares=0, impares=0;
    long soma=0, soma_p=0, soma_i=0;

    srand(time(NULL));

    for (int i = 0; i < 1000; i++) {
        v[i] = rand();
    }

    for (int i = 0; i < 1000; i++) {
        soma = soma + v[i];
    
        if(v[i]%2 == 0 ) {
            soma_p = soma_p + v[i];
            pares++;
        } else {
            soma_i = soma_i + v[i];
            impares++;
        }
    }

    
    printf("%ld\n", soma);
    printf("a media sera %.3f\n", (float)soma/1000);
    printf("A quantidado dos pares %d\n", pares);
    printf("A quantidade dos impares %d\n", impares);
    printf("A media dos pares %f\n", soma_p/pares);
    printf("A media dos impares %f\n", soma_i/impares);

}

void ex3() {
 /*
    Escreva um programa em linguagem C para que usuário forneça 10 valores inteiros. O
    programa deve permitir entradas de valores maiores que 0. Os primeiros cinco valores devem
    ser armazenados em um vetor A e os demais em um vetor B. Em seguida, o programa deve
    efetuar a troca dos valores existentes em A e B, considerando a regra: o valor da última posição
    do vetor A é trocado com o valor da primeira posição do vetor B, o valor da penúltima posição
    do vetor A é trocado com o valor da segunda posição do vetor B e assim sucessivamente. Esse
    processo deve ser realizado por meio de estruturas de repetições.
 */
    int v[5],v2[5],num;

    printf("Digite dez numeros maiores que 0:\n");

    for (int i = 0; i < 10; i++) {
        do {
            scanf(" %d", &num);
            if(num<0)
                printf("Digite valores maiores que 0\n");
        } while (num<0);
        
        if ( i > 4 ) {
            v2[i-5] = num;
        } else {
            v[i] = num;
        }
    }

    printf("Primeiro analise\n");
    for (int i = 0; i < 5; i++) {
        
        printf("V1[%d] = %d / V2[%d] = %d\n", i, v[i], i, v2[i]);
    }

    printf("\nSegunda analise\n");
    for (int i = 0; i < 5; i++) {
        num = v[i];
        v[i] = v2[4-i];
        v2[4-i] = num;
    }

    for (int i = 0; i < 5; i++) {
        printf("V1[i] = %d / V2[i] = %d\n", v[i], v2[i]);
    }
}

void ex4() {
/*
    Escreva um programa em linguagem C para que usuário forneça cinco valores inteiros. O
    programa deve permitir entradas de valores maiores que 0. Os primeiros cinco valores devem
    ser armazenados em um vetor A e os demais em um vetor B. Em seguida, o programa deve
    efetuar a multiplicação entre os valores disponíveis em A e B, armazenando o resultado em um
    terceiro vetor C. As posições devem ser multiplicadas de maneira invertida, ou seja, a primeira posição do
    vetor A deve ser multiplicada pela última posição do vetor B. O resultado deve ser armazenado
    na última posição do vetor C. Esse processo deve ser realizado por meio de estruturas de
    repetições.
*/
    int v[5],v2[5],v3[5],num;

    printf("Digite dez numeros maiores que 0:\n");

    for (int i = 0; i < 10; i++) {
        do {
            scanf(" %d", &num);
            if(num<0)
                printf("Digite valores maiores que 0\n");
        } while (num<0);
        
        if ( i > 4 ) {
            v2[i-5] = num;
        } else {
            v[i] = num;
        }
    }

    for (int i = 0; i < 5; i++) {
        v3[4-i] = v[i] * v2[4-i];
    }

    for (int i = 0; i < 5; i++) {
        printf("V1[i] = %d / V2[i] = %d / V3[i] = v1 * v2 = %d\n", v[i], v2[i], v3[i]);
    }
}

void ex5() {
/*
    Escreva um programa para simular as operações de uma pilha (First in last out - FILO), com
    10 posições. O primeiro elemento a ser empilhado é o último a ser retirado da pilha. Este tipo de
    estrutura é comumente utilizado para gerenciar chamadas de funções, por exemplo. O programa
    deve ter as operações de inserção e remoção. O processo de remoção não é físico. Uma
    remoção deve ser controlada por uma indicação lógica.
*/
    int v[10],opc,position=0,value;
    printf("\t\tFila teste\n");

    do{
        printf("Digite 0 para excluir e 1 para adicionar e 2 para visualizar");
        scanf("%d", &opc);
        
        if(opc==1) {
            if (position <= 9) {
                printf("digite o valor desejado para adicionar na fila: ");
                scanf("%d", &value);

                v[position] = value;
                position++;
            } else {
                printf("Pilha cheia");
            }
        } else if(opc==2) {
            if (position>0) {
                printf("v[%d] = %d\n", position-1, v[position-1]);
            } else {
                printf("pilha vazia");
            }
        } else {
            if (position>0) {
                position--;
            } else {
                printf("Pilha vazia");
            }
            
        }

    }while(opc==1 || opc==0 || opc==2 || opc==3);

}

void ex6() {
    
}

int main() {

    ex5();

    return 0;
}