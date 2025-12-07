#include <stdio.h>

int main()
{ float fahrenneit ,celcius;
  printf("enter fehrenheit");
  scanf("%f",& fahrenneit);
  celcius=(fahrenneit-32)*5/9;
  printf("celcius %f",celcius);

    return 0;
}