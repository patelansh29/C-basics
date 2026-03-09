//Program to Differentiate Between Global and Static Variable
#include<stdio.h>
int g=10; //Global Variable
    int var()
{
    int static s=0;  // Static Variable
    s=s+1;
    printf("Value of s:%d\n",s);
}
void main()
{
    int m=2,f;

    g=15;
    f=m*g;
    printf("Value of g:%d\n",g);
    printf("Value of f:%d\n",f);
    var();  //1st call
    var(); //2nd call
    var(); // 3rd call
}

