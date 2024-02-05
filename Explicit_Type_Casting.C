//Code Snippet to demonstrate the concept of explicit type casting in C Programming.
#include<stdio.h>

int main()
{
    int iNo1=10,iNo2=5;
    int iNo3=0;

    float fResult=0.0;

    iNo3= iNo1/iNo2;

    printf("%d \n",iNo3);

    //Explicit type casting.
    fResult=(float) iNo1/iNo3;
    
    printf("%f\n",fResult);

    return 0;
}