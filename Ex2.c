#include <stdio.h>

void main()
{

  int a,x=0;

    printf("Enter Digits\n");
    scanf("%d",&a);

  while (a > 0)
  {
    a=(a/10);

 x++;
  }

  printf("no of Digits = %d",x);

}
