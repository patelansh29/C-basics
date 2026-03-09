//4.Program to Swap 2 Numbers Using Two Variables
#include<stdio.h>

    void main()

    {
        int a,b;
        printf("Enter Values of a and b\n");
        scanf("%d",&a);
        scanf("%d",&b);

        printf("****Before Swaping****\n");

        printf("a=%d\n",a);
        printf("b=%d\n",b);

        a=a+b;
        b=a-b;
        a=b-a;


        printf("****After Swaping****\n");

        printf("a=%d\n",a);
        printf("b=%d\n",b);


    }
