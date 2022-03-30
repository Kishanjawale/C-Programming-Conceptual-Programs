#include<stdio.h>
//////////////////////////////////
//Function name: findaddtion
//Input: nothing
//Description:This function gives the addition of first 10 natural numbers
//Author:Kishan Jawale
//Date: 06/03/2022
///////////////////////////////////


int findadditiom()
{

 int  j, sum = 0;

    printf("The first 10 natural number is :\n");
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}
int main()
{
    findadditiom();
}