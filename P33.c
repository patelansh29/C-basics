//Program to Find Addition of two Numbers Using Define Function
//Args & with No Return Values
#include<stdio.h>

    int sum(int a,int b) // Function Defination, Declaration, and Arguments
    {
        int c;
        c=a+b;
        printf("Addition of two Numbers is :%d",c);
    }

    void main()
    {
        int add,x,y;
        x=10;
        y=15;
        add=sum(x,y); //Function Call With Arguments
    }

