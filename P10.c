//10.Program to Perform Simple Calculations Using Break Statement
#include<stdio.h>

    void main()
    {
        int a,b,c;

        printf(" Value of a = %d and b = %d\n",a,b);
        printf("Enter Your Choice\n 1.Addition\n 2.Subtraction\n 3.Division\n 4.Multiplication\n");

        scanf("%d",&c);

        printf("Enter Of Values of a and b\n");
        scanf("%d%d",&a,&b);

        switch(c)
        {
            case 1:
                c=a+b;
                printf("%d",c);
                break;

            case 2:
                c=a-b;
                printf("%d",c);
                break;

            case 3:
                c=a/b;
                printf("%d",c);
                break;

            case 4:
                c=a*b;
                printf("%d",c);
                break;

            default:
                 printf("invalid");
                 break;
        }

    }
