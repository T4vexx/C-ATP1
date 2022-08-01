#include <stdio.h>

void trocarValores(int *n, int *n1) {
    int aux;
    aux = *n;
    *n = *n1;
    *n1 = aux;
}

int main() {
    int a,b;
    printf("Digite 2 valores");
    scanf(" %d %d", &a,&b);

    trocarValores(&a,&b);

    printf("a %d, b %d",a,b);

    return 0;
}