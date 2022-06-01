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

int main() {

    ex2();

    return 0;
}