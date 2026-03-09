//3.Program for swaping values of a and b
#include<stdio.h>

    void main()

{
    int a,b,c;

    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);

    printf("****Before Swaping****\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    c=a;
    a=b;
    b=c;

    printf("****After Swaping****\n");
    printf("a=%d\n",a);
    printf("b=%d",b);


    }
