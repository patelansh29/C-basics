//Program to Find Addition of two Numbers Using Define Function
//Args & with Return Values
#include<stdio.h>

    int sum(int a,int b) // Function Defination, Declaration, and Arguments
    {
        int c;
        c=a+b;
       return c; //Return Values
    }

    void main()
    {
        int add,x,y;
        x=10;
        y=15;
        add=sum(x,y); //Function Call With Arguments and Return Values
        printf("Addition of two Numbers is :%d",add);
    }

