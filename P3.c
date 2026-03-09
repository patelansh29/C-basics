//3.Program to Swap 2 Numbers Using Three Variables
#include<stdio.h>

    void main()

    {
        int a,b,c;
        printf("Enter Values of a and b\n");
        scanf("%d",&a);
        scanf("%d",&b);

        printf("****Before Swaping****\n");

        printf("a=%d\n",a);
        printf("b=%d\n",b);

        c=a;
        a=b;
        b=c;


        printf("****After Swaping****\n");

        printf("a=%d\n",a);
        printf("b=%d\n",b);


    }

