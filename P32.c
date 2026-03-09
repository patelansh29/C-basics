//Program to Find Addition of two Numbers Using Define Function
//No Args & with Return Values
#include<stdio.h>

    int sum()  // Function Defination and Declaration
    {
        int a,b,c;
        a=10;
        b=15;
        c=a+b;
        return c;  // Return Values
    }

    void main()
    {
        int add;
        add=sum(); // Function Value Assigned

   printf("Addition of two Numbers is :%d",add);
    }

