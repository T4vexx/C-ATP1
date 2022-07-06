#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    printf("\t\tFila FILO teste\n");

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
/*
    Escreva um programa para simular as operações de uma fila (FIFO), ou seja, o primeiro
    elementoa entrar na fila é o primeiro a ser retirado da fila. O programa deve permitir uma fila
    com 10 posições. Uma lista FIFO é comumente utilizada para gerenciar processos em que a
    ordem de chegada é a que deve ser utilizada para o atendimento, por exemplo, como ocorre em
    uma fila de impressão. O programa deve ter as operações de inserção e remoção. O processo de
    remoção não é físico. Uma remoção deve ser controlada por uma indicação lógica.
*/
    int fifo[10],primeiro=0,ultimo=0,count=0,opc;

    do {
        printf("\t\tFila FIFO teste\n");

        do {
            printf ("\n\t 1. Consultar primeiro da fila");
       		printf ("\n\t 2. Incluir elemento na fila");
       		printf ("\n\t 3. Atender primeiro da fila");
       		printf ("\n\t 4. Sair\n");

            scanf(" %d", &opc);
        } while(opc<0 || opc>5);

        if(opc == 1) {
            if ( count == 0)
            	printf ("\n\t\t\t -- Fila Vazia! --");
            else
                printf("\nPrimeiro da fila: fifo[%d]\n", fifo[primeiro]);
        } else if (opc == 2) {
            if (count == 10) {
                printf("\n-- Fila cheia --");
            } else {
                printf("\nDigite o valor desejado para adicionar na fila: ");
                scanf(" %d", &fifo[ultimo]);
                ultimo++;
                count++;
            }
        } else if (opc == 3) {
            if (count == 0) {
                printf("\n-- Fila vazia --");
            } else {
                primeiro++;
                count--;
            } 
        } else if ( opc == 5 ) {
            for (int i = 0; i < 10; i++){
                printf("\nfifo[%d] = %d\n", i, fifo[i]);
            } 
        }

        printf("\n");
    } while(opc != 4);	 
}

void ex11() {
    int v[10],opc,maior,menor,aux,inter_f,inter_l;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        v[i] = rand();
    }

    do {
        do {
            printf("\t\t\n\n--- MENU ---\n");
			printf("\n1.Apresentar elementos em ordem crescente");
			printf("\n2.Apresentar elementos em ordem decrescente");
			printf("\n3.Imprimir vetor");	
			printf("\n4.Imprimir as posiçoes de um intervalo especificado pelo usuario");
			printf("\n0.Sair\n");

            scanf(" %d", &opc);

            if (opc < 0 || opc > 4){
                printf("Opcao invalida");
            }   
        } while(opc < 0 || opc > 4);

        if (opc == 1) {
            printf("\nOrdem crescente: ");
            for (int i=0; i<10; i++)
				{
					menor=i;
					for (int j=i+1; j<10; j++)
					{
						if (v[j] < v[menor])
							menor = j;
					}
			
                    aux = v[i];
					v[i] = v[menor];
					v[menor] = aux;	
				}
        } else if (opc == 2) {
             printf("\nOrdem decrescente: ");
            for (int i = 0; i < 10; i++) {
                maior = i;
                for (int j = i+1; j < 10; j++) {
                    if ( v[j] > v[maior]) {
                        maior = j;
                    }
                }
                aux = v[i];
                v[i] = v[maior];
                v[maior] = aux;
                
            }
        } else if (opc == 3) {
            printf("\nPrint vetor: \n");

            for (int i = 0; i < 10; i++) {
                printf("\n[%d]",v[i]);
            }
        } else if(opc == 4) {
            do {
                printf("\nDigite o inicio do intervalo e o fim: ");
                scanf(" %d %d", &inter_f, &inter_l);   
            }while(inter_f==0 && inter_l==0);

            for (int i = inter_f; i <= inter_l; i++) {
                printf("\n[%d]", v[i]);
            }
        } 


    } while (opc != 0);

}

void ex25() {
    int vFib[15],fib1=0,fib2=1,soma=0;

    for (int i = 0; i < 15; i++) {
        if (i == 0) {
            vFib[i] = 1;
        } else {
            soma = fib1 + fib2; 
            fib1 = fib2; 
            fib2 = soma;
            vFib[i] = soma;
        }
    }

    for (int i = 0; i < 15; i++) {
        printf("\n[%d]", vFib[i]);
    }
}

void ex28() {
    char str[61];
    int i=0, j=0, resp=1;

    printf("Digite uma palavra: ");
    scanf("%[^\n]s", str);

    while(str[j] != '\0') {
        j++;
    }

    printf("\nTamanho da palavra digitada: %d",j);
    j--; // vetor come;a em zero
    while(str[i] != '\0' && resp==1) {
        if (str[i] != str[j]) {
            resp = 0;
        }

        i++;
        j--;
    }
    if (resp==1)
    	printf("\nA palavra %s e um palindromo!", str);
    else
    	printf("\nA palavra %s nao e um palindromo!", str);
    
    return 0;
}

void ex29() {
    char v1[60]="",v2[60]="",v3[120]="",nome[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um nome: ");
        if (i < 5) {
            scanf(" %s", nome);
            strcat(v1, nome);
            strcat(v1, " ");
        } else {
            scanf(" %s", nome);
            strcat(v2, nome);
            strcat(v2, " ");
        }
    }

    puts(v1);
    printf("\n");
    puts(v2);
    printf("\n");
    strcat(v3, v1);
    strcat(v3, v2);
    puts(v3);
}


int main() {
    ex28();
    return 0;
}