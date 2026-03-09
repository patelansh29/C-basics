//5.Program to Convert No of Days into Year,Month,days Formate
#include<stdio.h>

    void main()

    {
        int x,Y,M,D;
        printf("Enter No of Days x=\n");
        scanf("%d",&x);


        printf("No of Days x = %d\n",x);

        Y=x/365;
        printf("Years=%d\n",Y);

        M=(x%365)/30;
        printf("Months=%d\n",M);

        D=(x%365)%30;
        printf("Days=%d\n",D);

    }
