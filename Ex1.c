#include <stdio.h>

void main()
{

  int a,digits=0;

    printf("Enter Digits\n");
    scanf("%d",&a);

  for(a;a>0;a=a/10)
  {
     digits=digits+1;
  }

  printf("%d",digits);

}
