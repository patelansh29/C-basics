//8.Program to Find Out Entered Character is Capital, Small, Letter, Digit or Any Special Character
#include<stdio.h>

    void main()
    {
        char a;
        printf("Enter Value of Character a =\n");
        scanf("%c",&a);


        if(a>='A' && a<='Z')
        {
            printf("Capital Letter");

        }

        else if(a>='a' && a<='z')
        {
            printf("Small Letter");
        }

         else if(a<='9' &&a>='0')
        {
            printf("Digit");
        }

        else
        {
            printf("Special Character");
        }
    }
