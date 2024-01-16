#include<stdio.h>

int Addition(int iNo1 , int iNo2)
{
    int iAddition =0; 
    iAddition = iNo1 + iNo2;
    return iAddition;
}


int main()
{
    int iValue1=20;
    int iValue2=20;
    int iRet=0;
    
    int (*fPtr)(int, int); //here int is return type of a finction and  (int ,int ) are the paramters to that function.
    
    fPtr=Addition; //Here fptr is a function pointer pointing to function Addition.

    printf("Address of addition functio is %d\n",Addition);
    iRet=fPtr(iValue1,iValue2);
    printf("Addition is %d",iRet);
    
    return 0;
}