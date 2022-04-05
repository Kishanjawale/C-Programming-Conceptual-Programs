#include<stdio.h>

//////////////////////////////////
//Function name: findmax
//Input: two intergers
//Description:This function gives biggest number bertween two numbers
//Author:Kishan Jawale
//Date: 06/03/2022
///////////////////////////////////

int findmax(int iA,int iB)
{
    if(iA>iB)
    {
        printf("%d  is greater than\n",iA);
    }
    
    else
    {
        printf("%d is greater\n",iB);
    }

}


int main()  //entry point function
 {
    auto  int iA=0;
    auto  int iB=0;

    printf("ENTER THE VALUE OF A\n");
    scanf("%d",&iA);

    printf("ENTER THE VALUE OF B \n");
    scanf("%d",&iB);

    findmax(iA,iB);//function call
    return 0;//convay to OS that program got successfully terminated

}
