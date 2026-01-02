
/**
 *
 * Bitwise Operater
 */

#include <stdio.h>

int main()
{

    int a, b;
    printf("\n Enter The Number");
    scanf("%d%d", &a, &b);
    printf("\n Bitwise And :%d", a & b);
    printf("\n Bitwise Or :%d", a | b);
    printf("\n Bitwise Xor :%d", a ^ b);
    printf("\n Bitwise Not :%d", ~a);


    // Left Shift Operater
     a=16;
     b=a<<2;
     printf("\n Left Shift :%d",b);
    

     // Right Shift Operater

     a=16;
     b=2>>a;
     printf("\n Right Shift :%d",b);





    return 0;
}