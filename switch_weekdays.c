#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//Input: Weekday number interger
//Description:C program to read weekday number and print weekday name using switch case.
//Author:Kishan Jawale
//Date: 06/03/2022
///////////////////////////////////////////////////////////////////////////////////


int main() //entry point function
{

    auto int iWdno=0;
    
    printf("ENTER THE WEEK DAY NUMBER TO GET WEEKDAY NAME:\n");
    scanf("%d",&iWdno);
    
    
    switch (iWdno)
     {
       case 1: 
            printf("Monday");
            break;
            
        case 2: 
            printf("Tuesday");
            break;
        
        case 3: 
            printf("Wednesday");
            break;
               
        case 4: 
            printf("Thursday");
            break; 
            
        case 5: 
            printf("Friday");
            break;
        
        case 6: 
            printf("Saturday");
            break;

        case 7: 
            printf("Sunday");
            break;


        default:
            printf("!!!!!\nInvalid Weekday Number\n!!!!");
            break;
    }
    
    return 0;//convay to OS that program got successfully terminated

}