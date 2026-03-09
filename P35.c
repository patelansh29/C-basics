//32.Program to Find Factorial of given Number using Recursion
#include<stdio.h>

    int factorial(int n)  // Recursion Function
{
      if(n==0)
        {
            return 1;
        }

        else
        {
            return n*factorial(n-1);// if n=4 i.e 4*3*2*1   that is 4*factorial(4-1).....
        }
}
    void main()
    {
        int rv,x;
        printf("Enter Value of x:");
        scanf("%d45",&x);
        rv=factorial(x);
        printf("Factorial of x:%d",rv);

    }
