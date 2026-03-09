//6.Program to Convert Degree Celcius to Farhenheit
#include<stdio.h>

    void main()

    {
        float F,C;
        printf("Enter Temperature in Degrees C=\n");
        scanf("%f",&C);

        F=(1.8*C)+32;

        printf("Temperature in Farhenheit F=%.2f\n",F);
    }
