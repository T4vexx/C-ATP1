#include <stdio.h>
#include <stdlib.h>

#define m 500
#define d 7

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

void ex141(){
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

void ex142(){
  int cities[d][d]={{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,10,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}};

  for(int x = 0; x < 7; x++){

    for(int y = 0; y < 7; y++){
      if(x==y){
        printf(" \t ");
      } else {
        printf(" \t%d",cities[x][y]);
      }
      
    }
    printf("\n");
  }
}

void ex143(){
  int cities[d][d]={{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,10,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}},cita,citb;

  do{
    if(cita==0 && citb==0){
      printf("digite 2 valores de origem e destino: ");
      scanf("%d %d")
    }
  }while();
}

int main() {

  ex24e25();

  return 0;
}