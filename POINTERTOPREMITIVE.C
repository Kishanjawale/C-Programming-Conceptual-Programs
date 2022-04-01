#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//@Author:Kishan Jawale
//Date: 2/04/2022
//Description:This program Demonstrate the concept  of Pointer to Premitive data types in C
//premitive datatypes:
//   1.int      2.char
//   3.float    4.double
//   5.void   ---- we did not created pointer of void because it points to nothing 
///////////////////////////////////////////////////////////////////////////


int main()
{
    char Ch='M';       
    char *Cptr=&Ch;   //Cptr is a pointer which  holds address of Ch

    int iNum=111;
    int *Iptr=&iNum;    //Iptr is a pointer which  holds address of Ch

    float fNum=11.11;
    float *Fptr=&fNum;  //Fptr is a pointer which  holds address of Ch

    double dNum=10.25;
    double *Dptr=&dNum; //Dptr is a pointer which  holds address of Ch


    printf("Character =%c\n",Ch);
    printf("Address of Character =%d\n",Cptr);
    printf("Size of Character pointer: %d\n",sizeof(Cptr));

    printf("Integer =%d\n",iNum);
    printf("Address of Interger =%d\n",Iptr);
    printf("Size of Interger pointer: %d\n",sizeof(Iptr));

    printf("Float =%f\n",fNum);
    printf("Address of Float =%d\n",Fptr);
    printf("Size of Float pointer: %d\n",sizeof(Fptr));
    
    printf("Double =%lf\n",dNum);
    printf("Address of Double =%d\n",Dptr);
    printf("Size of Double pointer: %d\n",sizeof(Dptr));

    //my compilor  is 32 bit so size of pointer  is 4 bytes........
    //if your compiler is 64 bit it can give 8 bytes


    return 0;
}