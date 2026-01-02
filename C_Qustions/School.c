#include <stdio.h>


int main(){


    int m1,m2,m3,m4,m5,total;


    float avg;

    printf("\n Enter tha Marks");

    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total=(m1+m2+m3+m4+m5);
    avg=total/5.0;

    printf("\n Total :%d",total);
    printf("\n Average :%0.2f",avg);

    return 0;
}