//9.Program to Find Out Maximum Number out of Three Numbers Using Nested if and Else if statement
#include<stdio.h>

    void main()
    {
        int M;
        printf("Enter Your Marks M =\n");
        scanf("%d",&M);

        if(M<=100 && M>=80)
        {
            printf("Distinction");

        }

        else if(M<=79 && M>=60)
        {
            printf("First Class");
        }

         else if(M<=59 && M>=40)
        {
            printf("Second Class");
        }

        else if(M<40 && M>=0)
        {
            printf("Fail");
        }

        else
        {
            printf("Invalid Value");
        }
    }
