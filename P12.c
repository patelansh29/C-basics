//11.Program to Check Three Digits Number is Palinfrome or not
#include<stdio.h>
    void main()

    {
        int a,b,c,d;

        printf("Enter Two Digits Number: ");
        scanf("%d",&a);

        b=a/10;
        c=a%10;
        d=b+c;

        printf("\nFirst Digit:%d",b);
        printf("\nLast Digit:%d",c);
        printf("\nSum Of Both Digits:%d",d);

    }

