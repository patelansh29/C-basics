//11.Program to Check Three Digits Number is Palinfrome or not
#include<stdio.h>
    void main()

    {
        int a=0,b=1,n,x;

        printf("Enter Value of n: ");
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            printf("%d",a);
            x=a+b;
            a=b;
            b=x;
        }
    }


