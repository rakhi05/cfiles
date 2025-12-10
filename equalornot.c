#include <stdio.h>
#include <conio.h>

int main (){
    int num1,num2;
    clrscr();
    
    printf("enter the first number :");
    scanf("%d",& num1);
    printf("enter the second number :");
    scanf("%d",& num2);
    
    if (num1==num2){
          printf("the two number are equal\n");
    } else{
          printf("the two number are not equal\n");
    }    
      getch();
      return 0;
}