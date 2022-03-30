#include<stdio.h>
//////////////////////////////////
//Function name:Factorial
//Input: One Integer
//Return:Factorial of given number
//Description:This function gives Factorial Number of Given Number.
//Author:Kishan Jawale
//Date: 19/03/2022
///////////////////////////////////
int Factorial(int No1)
{
    int i=0;
    int iFact=1; 
    for (i=1;i<=No1;i++)
        {
            iFact=iFact*i;
        }
       
    return iFact;
    
}

int main()
{
    int Number=0; 
    int iRet=0;
    printf("Enter ther number for Finding factorial:");
    scanf("%d",&Number);
    
    iRet=Factorial(Number);// call to function factorial
    
    printf("The Factorial  of Given Number is :%d",iRet);
    return 0;

}