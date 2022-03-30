#include<stdio.h>
//////////////////////////////////
//Function name: findmax
//Input: 3 intergers
//Description:This function gives biggest number bertween Three numbers
//Author:Kishan Jawale
//Date: 06/03/2022
///////////////////////////////////

int findmax(int iA,int iB,int iC)
{
    
    if ((iA>iB) && (iB>iC))
    {
        printf("%d is Greater",iA);
    }

    else if((iB>iA ) && (iA>iC))
    {
        printf("%d is Greater",iB);
    }

    else
    {
        printf("%d is Greater",iC);
    }
}

int main()  //entry point function
{
    auto  int iA=0;
    auto  int iB=0;
    auto  int iC=0;

    printf("ENTER THE VALUE OF A\n");
    scanf("%d",&iA);

    printf("ENTER THE VALUE OF B \n");
    scanf("%d",&iB);


    printf("ENTER THE VALUE OF C \n");
    scanf("%d",&iC);

    findmax(iA,iB,iC);//function call
    return 0;//convay to OS that program got successfully terminated

}