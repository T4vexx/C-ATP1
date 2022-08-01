#include <stdio.h>

int fatorial(int n) {
    int fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }
    

    return fatorial;
}

int main() {
    int a;
    printf("Digite um valor pra ser calculado o fatorial: ");
    scanf(" %d", &a);

    printf("o fatorial de %d e %d",a,fatorial(a));

    return 0;
}