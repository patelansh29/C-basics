//7.Program to Find Out Maximum Number out of Three Numbers Using Nested if and Else if statement
#include<stdio.h>

    void main()
    {
        int a,b,c;
        printf("Enter Value of a,b,c =\n");
        scanf("%d%d%d",&a,&b,&c);

        if(a>b)
        {
            if(a>c)
            {
                printf("Maximum Value is a = %d",a);

            }

        }
        else if(b>c)
        {
            if(b>a)
            {
                printf("Maximum Value is b = %d",b);

            }

        }
        else
        {
            printf("Maximum Value is c = %d",c);
        }
    }
