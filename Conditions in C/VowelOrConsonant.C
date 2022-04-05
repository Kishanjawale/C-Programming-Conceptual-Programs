#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//Function Name : Vowel
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This function  takes 1 character from user and determine that its vowel or consonant
///////////////////////////////////////////////////////////////////////////


 void vowel(char ch)       
{
    if (ch=='A'||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'||ch=='a'||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
    {
        printf("Its A Vowel");     
    }
    else
    {
        printf("Its A Consonent");
    }
    

}

int main()      //Entry point function
{
    char ch1;
    printf("Enter The character to check for vowel or not:");
    scanf("%c",&ch1);

    vowel(ch1);   //function calling 
    return 0;
}
