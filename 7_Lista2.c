#include <stdio.h>
#include <math.h>

int main() 
{
    int X=1,A=3,B=5,C=8,D=7;

    printf("n: %d", !(X>3));
    
    printf("\nn: %d", (X>3) && !(B>D));

    printf("\nn: %d", ! (D<0) && (C>5));

    printf("\nn: %d", ! (X>3) || (C<7));

    printf("\nn: %d", (A>B) || (C>B));

    printf("\nn: %d",(X>=2));

    printf("\nn: %d", (X<1) && (B>=D));
   
    printf("\nn: %d", (D<0) || (C>5));

    printf("\nn: %d", !(D>3) || !(B<7));

    printf("\nn: %d", (A>B) || !(C>B));
   

   return 0;
}