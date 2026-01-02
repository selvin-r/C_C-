#include <stdio.h>

int main()
{
    float km, m, cm, ft, in;
    printf("\n Enter The Kilometer :");
    scanf("%f", &km);
    m = km * 1000;  // Metter is Caluculate
    cm = m * 100;   // Centimeter is Caluculate
    in = cm / 2.54; // Inch is Caluculate
    ft = in / 12;   // Foot is Caluculate
    printf("\n Kilometer :%0.2f", km);
    printf("\n Metter :%0.2f", m);
    printf("\n Centimeter :%0.2f", cm);

    printf("\n Inch :%0.2f", in);
    printf("\n Foot :%0.2f", ft);
    return 0;
}