/**
 *
 *
 * Formula
 *
 * Rectangle
 *
 * Area =l*b;
 * Perimeter =2(l+b)
 *
 *
 * circle:
 * Area : pir2
 * Perimeter:2pi
 *
 * pi=3.14
 */

#include <stdio.h>

int main()
{

    // Reacteangle

    float l, b, r_area, r_perimeter, r, c_area, cir;

    printf("\n Enter the length & Braadth");
    scanf("%f%f", &l, &b);

    printf("\n Enter tha Radius");
    scanf("%f", &r);

    r_area = l * b;
    r_perimeter = 2 * (l + b);
    printf("\n Area :%0.2f", r_area);
    printf("\n Perimeter :%0.2f", r_perimeter);

    // Circle

    c_area = 3.14 * r * r;
    cir = 2*3.14 * r;
    printf("\n CircalArea :%0.2f", c_area);
    printf("\n cir :%0.2f", cir);

    return 0;
}