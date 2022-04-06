#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//Function Name : CalculateInterest
//@Author:Kishan Jawale
//Date: 07/04/2022
//Description:This Function Takes  (ROI ,Time Amount)  as Arguments/Input And returns The calulated Simple interst   
///////////////////////////////////////////////////////////////////////////


float CaluateInterest(float Roi,int Time,int Amount)
{
   float SI=0;
    SI=((Amount*Roi*Time)/100);
    return SI;
}


int main()      //Entry Point Function
{
    //Varibale Declartion
    float fROI=0;
    int iTime=0; 
    int iPrincipleAmount=0;

    float fSimpleInterest=0;

    float fTotalAmmount=0;

    //Accepting values from user

    printf("Enter the Principle Amount :\n");
    scanf("%d",&iPrincipleAmount);

    printf("Enter the Number of Years /Time :\n");
    scanf("%d",&iTime);

    printf("Enter the Rate of interest Per year:\n");
    scanf("%f",&fROI);


    fSimpleInterest=CaluateInterest(fROI,iTime,iPrincipleAmount);       //Calling the Function CalculateInTerst
    printf("Simple Interest =\n%f\n",fSimpleInterest);                  //Displaying Simple interst
    

    fTotalAmmount=iPrincipleAmount+fSimpleInterest;         //Calculating total ammount 

    printf("Total Ammount You Have to Pay to bank is :\n%f\n",fTotalAmmount);

    return 0;
}