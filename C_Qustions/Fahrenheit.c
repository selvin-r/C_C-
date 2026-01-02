
// Convert to Fahrenheit to Celsius

// Formula (32%f -32) * 5/9

 
#include <stdio.h>

int main(){

    float f,c;

    printf("\n Enter The Temperature");

    scanf("%f",&f);

    c=(f-32)*(5.0/9.0);
    printf("\n Temperature :%0.2f",c);

    return 0;
}



