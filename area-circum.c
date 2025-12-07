#include <stdio.h>

int main()
{
    float radius,area,circum,pi=3.14;
    clrscr();
    printf("enter the radius");
    scanf("%f",&radius);
    area=pi*radius*radius;
    circum=2*pi*radius;
    printf("area of circle is %f",area);
    printf("circumference of circle is %f",circum);
    

    return 0;
}