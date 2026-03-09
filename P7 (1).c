//7.Program to Convert Farhenheit to Degree Celcius
#include<stdio.h>

    void main()

    {
       float F,C;
        printf("Enter Temperature in Farhenheit F=\n");
        scanf("%f",&F);

        C=(F-32)/1.8;

        printf("Temperature in Degree Celcius D=%.2f\n",C);
    }
