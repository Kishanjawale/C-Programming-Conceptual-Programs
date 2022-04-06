#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//Function Name : Main
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This Function Takes any number from user And generate its Table    
///////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo=0;
    int iTable=0;
    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    printf("Table of %d :\n",iNo);

    for(int i=1;i<=10;i++)
    {
        iTable= iNo*i;
        printf( "%d\n",iTable);
    }

    return 0;
}