#include <stdio.h>
#include <conio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5,sum;
    float percentage;
    clrscr();
    printf("enter sub1:");
    scanf("%d",&sub1);
    printf("enter sub2:");
    scanf("%d",&sub2);
    printf("enter sub3:");
    scanf("%d",&sub3);
    printf("enter sub4:");
    scanf("%d",&sub4);
    printf("enter sub5:");
    scanf("%d",&sub5);
    
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage = (sum*100)/500;
    
    printf("sum is: %d\n",sum);
    printf("percentage is %f",percentage);
    getch();
    return 0;
}