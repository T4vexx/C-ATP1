#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define m 500
#define d 7
#define linA 3
#define colA 3
#define linB 3
#define colB 3

void ex1() {
  int M[4][4],counter=0;

  srand(time(NULL));

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      M[i][j] = (rand() % 20) + 1;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (M[i][j] > 10) {
        counter++;
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf(" M[%d][%d] = %d",i,j,M[i][j]);
    }
    printf("\n");
  }

  printf("A matriz tem %d numeros maiores que 10",counter);

}

void ex2() {
  int M2[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if(i == j) {
        M2[i][j] = 1;
      } else {
        M2[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ",M2[i][j]);
    } 
    printf("\n");
  }

}

void ex3() {
  int M3[4][4];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      M3[i][j] = i*j;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ",M3[i][j]);
    } 
    printf("\n");
  }
}

void ex4() {
  int M[4][4],index[2],maior;

  srand(time(NULL));

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      M[i][j] = (rand() % 20) + 1;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i==0 && j==0) {
        maior = M[i][j];
        index[0] = i;
        index[1] = j;
      } else {
        if(M[i][j] > maior) {
          maior = M[i][j];
          index[0] = i;
          index[1] = j;
        }
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ",M[i][j]);
    }
    printf("\n");
  }

  printf("O maior e o M[%d][%d] = %d",index[0],index[1],maior);
}

void ex5() {
  int M[5][5],index[2] = {100,100},valor;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("\nDigite o valor do [%d][%d]: ",i,j);
      scanf("%d", &M[i][i]);
    }
  }

  printf("\nDigite uma valor a ser buscado");
  scanf("%d", &valor);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (M[i][i] == valor) {
        index[0] = i;
        index[1] = j;
      }
    }
  }

  if(index[0]==100 && index[1]==100) {
    printf("\nValor não encontrado");
  } else {
    printf("\nO valor se encontra na linha %d e na coluna %d",index[0],index[1]);
  }

}

void ex6() {
  int A[4][4],B[4][4],C[4][4];

  srand(time(NULL));

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      A[i][j] = rand() % 101;
      B[i][j] = rand() % 101;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if(A[i][j] >= B[i][j]) {
        C[i][j] = A[i][j];
      } else {
        C[i][j] = B[i][j];
      }
    }
  }

  printf("\nA primeira\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  printf("\nB segunda\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  printf("\nC terceira\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }

}

void ex7() {
  int M[4][4];
  srand(time(NULL));

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      M[i][j] = (rand() % 20)+1;
    }
  }

  printf("\nMatriz normal\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("[%d] ",M[i][j]);
      if(j>i) {
        M[i][j] = 0;
      }
    }
    printf("\n");
  }

  printf("\nMatriz triangular\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("[%d] ",M[i][j]);
    }
    printf("\n");
  }
}

void ex8() {
  int cartela[5][5],valores[25]={0},numero,pos=0,flag;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
     if(pos==0) {
      numero = rand() % 100;
      valores[pos] = numero;
      cartela[i][j] = numero;
      pos++;
     } else {
      do {
        flag=0;
        numero = rand() % 100;
        for (int k = 0; k < 25; k++) {
          if(valores[k] == numero) {
            flag = 1;
          }
        }
      } while(flag==1);
      valores[pos] = numero;
      cartela[i][j] = numero;
      pos++;
     }
    }
  }

  printf("\nCartela do bingo\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("[%d] ",cartela[i][j]);
    }
    printf("\n");
  }
}

void ex9() {
  char provas[5][10],gabarito[10]={'a','b','b','c','d','a','c','b','d','c'},resultado[5],counter=0; 
  srand(time(NULL));

  printf("\nRespostas: \n");
  for(int i = 0; i < 5; i++) {
    printf("Aluno %d\n",i+1);
    for(int j = 0; j < 10; j++) {
      provas[i][j] = (char)((rand() % 4) + 97); 
      printf("[%c] ",provas[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < 5; i++) {
    counter = 0;
    for(int j = 0; j < 10; j++) {
      if (provas[i][j] == gabarito[j]) {
        counter++;
      }
    }
    resultado[i] = counter;
  }

  printf("\nResultado: \n");
  for(int i = 0; i < 5; i++) {
    printf("Desempeenho do aluno %d foi de %d\n",i+1,resultado[i]);
  }

}

typedef struct Alunos {
  char matricula[30];
  char respostas[10];
  int acertos;
  char status;
} Talunos;

void ex10() {
  char gabarito[10];
  int counter;
  Talunos alunos[3];
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    printf("Digite a resposta %d: ",i+1);
    fflush(stdin);
    scanf("%c", &gabarito[i]);
  }

  for (int i = 0; i < 3; i++) {
    printf("Digite a matricula do aluno %d: ",i+1);
    fflush(stdin);
    scanf("%s",alunos[i].matricula);
    for (int j = 0; j < 10; j++) {
      alunos[i].respostas[j] = (char)((rand() % 5) + 97); 
    }
  }

  for (int i = 0; i < 3; i++) {
    counter = 0;
    for (int j = 0; j < 10; j++) {
      if (alunos[i].respostas[j] == gabarito[j]) {
        counter++;
      }
    }
    alunos[i].acertos = counter;
    if (counter >= 7) {
      alunos[i].status = 'A';
    } else {
      alunos[i].status = 'R';
    }
  }

  printf("Alunos: \n");
  for (int i = 0; i < 3; i++) {
    printf("\nA matricula: %s\n",alunos[i].matricula);
    for (int j = 0; j < 10; j++) {
      printf("[%c] ",alunos[i].respostas[j]);
    }
    if(alunos[i].status == 'A') {
      printf("\nO aluno foi aprovado com %.2f de aproveitameto",((float)alunos[i].acertos/10)*100);
    } else {
      printf("\nO aluno foi reprovado com %.2f de aproveitameto",((float)alunos[i].acertos/10)*100);
    }
  }

}

void ex11_12() {
  int M1[4][4],M2[4][4],M3[4][4];

  printf("Digite 32 numeros: \n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 4; j++) {
      if (i < 5) {
        printf("Numero[%d][%d]: ",i,j);
        fflush(stdin);
        scanf("%d", &M1[i][j]);
      } else {
        printf("Numero[%d][%d]: ",i-5,j);
        fflush(stdin);
        scanf("%d", &M2[i-5][j]);
      }
    }
  }

  printf("\nMatriz 1: \n");
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      printf("[%d]",M1[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz 2: \n");
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      printf("[%d]",M2[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz Soma: \n");
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      M3[i][j] = M1[i][j] + M2[i][j];
      printf("[%d]",M3[i][j]);
    }
    printf("\n");
  }
  

}

void ex13() {
  int A[linA][colA],B[linB][colB],R[linA][colB]={0};
  srand(time(NULL));

  if (colA == linB) {
    printf("\nInserçao de valores: \n");
		for (int i=0; i<linA; i++) {
			for (int j=0; j<colB; j++) {
				A[i][j] = rand() % 10;
        B[i][j] = rand() % 10;
			}	
		}

    for (int i=0; i<linA; i++) {
      for(int j=0; j<colB; j++) {
        for(int k=0; k<colA; k++) {
          R[i][j] = R[i][j] + A[i][k]*B[k][j];
        }
      }	
    }

    for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				printf("[%d] ",A[i][j]);
			}	
      printf("\n");
		}
    printf("\n");
    for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				printf("[%d] ",B[i][j]);
			}	
      printf("\n");
		}
    printf("\n");
    for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				printf("[%d] ",R[i][j]);
			}	
      printf("\n");
		}
  } else {
    printf("Tamanhos de matrizes incompativeis com a multiplicação");
  }
}

void ex14_1(){
  int cities[d][d]={{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,10,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}},citya,cityb;

  do{

    do{
      printf("digite o valor da cidade origem e da cidade destino: ");
      scanf("%d %d", &citya,&cityb);
    }while((citya > 6 || citya < 0) || (cityb > 6 || cityb < 0));
    //system("clear");

    printf("\no tempo de viagem é: %d\n",cities[citya][cityb]);
  }while(citya != cityb);
}

void ex14_2(){
  int cities[d][d]={{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,10,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}};

  for(int x = 0; x < 7; x++){

    for(int y = 0; y < 7; y++){
      if(x==y){
        printf(" \t ");
      } else if (x>y) {
        printf(" \t ");
      } else {
        printf(" \t%d",cities[x][y]);
      }
      
    }
    printf("\n");
  }
}

void ex14_3(){
  int cities[d][d]={{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,10,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}},cita,citb;

  // do{
  //   if(cita==0 && citb==0){
  //     printf("digite 2 valores de origem e destino: ");
  //     scanf("%d %d")
  //   }
  // }while();
}

void desafio1() {
  int A[3][3],counter=1;

  for(int l = 0; l < 3; l++){
    for(int c = 0; c < 3; c++){
      A[l][c] = l+c;
    }
  }

  printf("Diagonal principal: \n");

  for(int l = 0; l < 3; l++){
    for(int c = 0; c < 3; c++){
      if (l == c) {
        for(int cont = 0; cont < counter; cont++) {
          printf(" ");
        }
        printf("%d",A[l][c]);
        puts("\n");	
        counter++;
      }
    }
  }
  printf("\nMatrix: \n");
  for(int l = 0; l < 3; l++){
    for(int c = 0; c < 3; c++){
      printf("%d ",A[l][c]);
    }
    printf("\n");
  }

}

void ex24e25(){
  int A[m][m][m];
  long unsigned n; 

  n = sizeof(int);

  for(int x = m-1; x>=0; x--){

    for(int y = m-1; y>=0; y--){

      for(int z = m-1; z>=0; z--){
        A[x][y][z] = z;
      }
    }
  }



  for(int x = m-1; x>=0; x--){
    //printf("fatia %d\n", x);
    for(int y = m-1; y>=0; y--){

      for(int z = m-1; z>=0; z--){
        //printf("%d ",A[x][y][z]);
      }
      //printf("\n");
    }
    //printf("\n");
  }

  printf("tamanho da matriz a %ld em byts", m*m*m*n);
}

int main() {
  setlocale(LC_ALL,"Portuguese");
  
  ex13();

  return 0;
}