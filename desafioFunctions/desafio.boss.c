#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lernotas(float **mat, int n) {
  for (int i = 0; i < n; i++) {
    printf("\n\n ** Aluno %d \n", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("Nota %d: ", j + 1);
      fflush(stdin);
      scanf("%f", &mat[i][j]);
    }
  }
}

void mediageral(float **mat, int n) {
  int i, j;
  float soma;

  for (i = 0; i < n; i++) {
    soma = 0;
    for (j = 0; j < 3; j++) {
      soma += mat[i][j];
    }
    mat[i][3] = (soma / 3);
  }
}

void mostrarmedias(float **mat, int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("\nA media do aluno e %d: %.2f", i + 1, mat[i][3]);
  }
}

int main() {
  float **mat;
  int i, j, n;

  printf("Digite o tanto de alunos: ");
  scanf("%d", &n);

  mat = malloc(n * sizeof(float));

  for (i = 0; i < n; i++) {
    mat[i] = malloc(4 * sizeof(float));
  }

  printf("\nIntroduçao das notas:\n");
  lernotas(mat, n);
  for (i = 0; i < n; i++) {
    printf("** Aluno %d\n", i + 1);
    for (j = 0; j < 4; j++) {
      printf("[nota %d : %.2f] |", j + 1, mat[i][j]);
    }
    printf("\n");
  }

  printf("\nIntroduçao do media geral:\n");
  mediageral(mat, n);

  mostrarmedias(mat, n);
  free(mat);
  return 0;
}

// alocaçao dinamica na matriz