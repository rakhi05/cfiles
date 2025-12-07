#include <stdio.h>

int main()
{
    int num,fd,ld,sum;
    printf("enter a four digit no.");
    scanf("%d",& num);
    fd=num/1000;
    ld=num%10;
    sum=fd+ld;
    printf("%d is the sum of first and last number",sum);
    
    return 0;
}
