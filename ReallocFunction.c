#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//Description:This program Demonstrate the concept of Realloc function
//realloc- This function increse or decrease the size of allocated memory at run time  
//@Author:Kishan Jawale
//Date: 30/03/2022
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize=0;
    int *ptr=NULL;

    printf("Enter the no  of elements for which you want to allocate the memoryL:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize* sizeof(int));//Here Malloc allocate the memory for entered number of varibales


    if(ptr==NULL)
    {
        printf("Memory Allocation Request Rjected\n ");
    }
    else
    {
        printf("Memory Allocated Successfully\n");
        printf("Memory Allocated at the location: %d\n",ptr);
    }


    realloc(ptr,0); 
    //here we are using the realloc function to free the alloacated memory
    //if we want to change the size of allocated memory you can chang the value of 0 to add or reduce the memory size.


    if(ptr==NULL)
    {
              printf("Memory Allocation Request Rjected\n");
    }
    else
    {
             printf("Memory De-allocated Successfully\n");
    }

    return 0;
}