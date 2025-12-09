#include <stdio.h>

int main()
{   int fd,sd,ld,num,sum;

    printf("enter a three digit no.");
    scanf("%d",& num);
    fd=num/100;
    sd=num%100/10;
    ld=num%10;
    sum=fd+sd+ld;
    printf("%d is the sum of all three digit",sum);

    return 0;
}
