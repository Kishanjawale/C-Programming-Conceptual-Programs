#include<stdio.h>


//////////////////////////////////////////////////////////////////////////
//Function Name : Check
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This function  takes 1 Integer and checks wheather it is divisible by 5 or not
///////////////////////////////////////////////////////////////////////////




int Check(No)
{

     if((No%5)==0)
        {
            printf("Number is Divisible by 5");
        }

         else
         {
            printf("Number is NOT Divisible by 5");
         }

}


 int main()
 {
       int iNo1=0;

       printf("Enter the Number to check wheather the number is divisible by 5 or not");
       scanf("%d",&iNo1);

        Check(iNo1);

       
     return 0;

 }