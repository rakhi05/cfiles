#include <stdio.h>

int main()
{
   int x,y,z;
   clrscr();
   printf("enter the value of x and y");
   scanf("%d %d",&x,&y);
   z=x;
   x=y;
   y=z;
   printf("varriable swapped !!");

    return 0;
}