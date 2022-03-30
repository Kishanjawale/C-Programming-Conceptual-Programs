#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//Description:This program Demonstrate the concept of Malloc and Free Function in C programming
//malloc- Malloc function alloactes the menory for required variable at run time 
//free- free function deallocate the memory allocated by the malloc function
//@Author:Kishan Jawale
//Date: 30/03/2022
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int  iSize = 0;
    int *ptr= NULL;  //initializing the pointer to NULL
    printf("enter the number of elementsgcc ma ");
    scanf("%d",&iSize);  //Accepts the no of interger for memory allocation 


    ptr=(int *)malloc(iSize*sizeof(int));
         /* (int * )it is a type cast 
            which divide the memory given by malloc function in  4 bytes as it 
            is a integer type cast     
         */
    
    
    if(ptr== NULL)
        {
             printf("Memory allocation request rejected\n ");
        }
    else
        {
            printf("Memory is allocated Successfully \n");
        }
    free(ptr); //free fuction is used to de-alloacate the allocated memory by the malloc function..
    printf("Address of Pointer %d\n ",ptr);
    return 0;
}
