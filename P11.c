//11.Program to Check Three Digits Number is Palinfrome or not
#include<stdio.h>
    void main()

    {
        int N1,N2;

        printf("Enter Three Digits Number:");
        scanf("%d",&N1);

        N2=(N1%10)*100;
        N2=N2+(((N1/10)%10)*10);
        N2=N2+(N1/100);

        if(N1==N2)
        {
            printf("Entered Number is Palindrome");

        }
        else
        {
            printf("Entered Number is not Palindrome");
        }
    }
