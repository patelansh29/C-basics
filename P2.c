//2.Program to Calculate Simple Intrest
#include<stdio.h>

    void main()

    {
        int P,R,N;
        float I;
        printf("Enter Value of Principle Amount P\n");
        scanf("%d",&P);


        printf("Enter Value of Rate of Intrest R\n");
        scanf("%d",&R);

        printf("Enter Value of No of Years N\n");
        scanf("%d",&N);

        printf("P=%d\n",P);
        printf("R=%d\n",R);
        printf("N=%d\n",N);

        I=(P*R*N)/100;

        printf("\nSimple Intrest=%.2f",I);
    }
