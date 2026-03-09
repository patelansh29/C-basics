#include<stdio.h>

    int factorial(int n)
{
      if(n==0)
        {
            return 1;
        }

        else
        {
            return n*factorial(n-1);
        }
}
    int main()
    {
        int rv,x;
        printf("Enter Value of x:");
        scanf("%d",&x);
        rv=factorial(x);
        printf("Factorial of x:%d",rv);
            return 0;
    }
