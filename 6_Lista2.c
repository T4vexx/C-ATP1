#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>


int main() 
{
    int A=2,B=7;
    float C=3.5;
    int L = 0;


    if ((2<5) && (15/3 == 5)) {
        printf("True");
    } else {
        printf("False");
    }

    if (L || (15/3 == 5)) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (L || (20 / (18/3)) != ((21/3) / (2))) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (!(!L) || (3*3)/3 < 15 - 35%7) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (!(((5!=10/2) || !L) && (2-5>5-2 || !L))) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if ((2*2*2*2 != 4 + 2) || (2+3*5/3%5 > 0)) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (B == A * C && L || !L) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (B > A || B == A*A) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (L && (B/A >= C) || !(A<=C)) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (!L || !L && sqrt(A+B) >= C) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (B/A == C || B/A != C) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }

    if (L || ( B*B <= C * 10 + A*B)) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }
   
   return 0;
}