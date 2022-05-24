#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

int main() 
{
    int A=5,B=10,C=-8;
    float D=1.5;

    printf("n: %d", 2*A%3-C);

    printf("\nn: %f", sqrt(-2 * C) / 4);

    printf("\nn: %f", (30 % 4 * pow(3,3)) * -1);

    printf("\nn: %f", pow(-C,2) + (D*10) / A);

    printf("\nn: %f", sqrt(pow(A, B/A)) + C*D);

   return 0;
}