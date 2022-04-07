#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//Function Name : FindVolume 
//@Author:Kishan Jawale
//Date: 07/04/2022
//Description:This Function Takes Side as Arguments/Input And returns Volume Of Cube  
///////////////////////////////////////////////////////////////////////////

float FindVolume(float Side)
{

    float Volume=0;
    Volume=(Side*Side*Side);

    return Volume; 

}

int main()
{
        //Variable Declaration
     float fSide=0;
     float fVolume=0;

        //Accepting input from User
     printf("Enter the Side of Cube:\n");
     scanf("%f",&fSide);
    

     fVolume=FindVolume(fSide);  //Calling The function FindVolume 
     printf("Volume of Cube: %f\n",fVolume);

    return 0;
}