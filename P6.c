//6.Program to Find Accepted Number is Negative or Positive or Zero Using else if statement
#include<stdio.h>

    void main()
    {
        int a;
        printf("Enter Value of a =\n");
        scanf("%d",&a);

        if(a>0)
        {
            printf("Entered Value is Positive");

        }
        else if(a<0)
        {
            printf("Entered Value is Negative");
        }
        else
        {
            printf("Entered Value is Zero");
        }
    }
