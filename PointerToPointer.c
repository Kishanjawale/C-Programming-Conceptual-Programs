#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////
//Description:This program just Demonstrate the concept of Pointer to Pointer 
//@Author:Kishan Jawale
//Date: 31/03/2022
//IMPORTANT-
//   Size of Pointer varries from compilor to compilor
//   for a 32 bit compilor the pointer size can be 4 bytes for a 64 bit compilor the pointer size can be 8 bytes.
///////////////////////////////////////////////////////////////////////////////////////
 
int main()
{
    int iNo=20;              //Integer iNO Intialization
    int *p=&iNo;            // P is pointer pointing to iNo 
    int **q=&p;            // q is pointer pointing to p 
    int ***r=&q;          // r is pointer pointing to q
    int ****s=&r;        // s is pointer pointing to r         
    int *****t=&s;      // t is pointer pointing to s

    printf("Size of Int:%d\n",sizeof(iNo));            //Expected output:4
    printf("Size of Pointer:%d\n",sizeof(p));         //Expected output:4 / 8  ........The size of pointer varries from compilor to compilor....
                                                     //my compilor  is 32 bit so size of pointer  is 4 bytes........
                                                    //if your compiler is 64 bit it can give 8 bytes
    printf("%d\n",(*p));             //Expected output: 20
    printf("%d\n",(**q));           //Expected output: 20
    printf("%d\n",(***r));         //Expected output: 20
    printf("%d\n",(****s));       //Expected output: 20
    printf("%d\n",(*****t));     //Expected output: 20
    
    return 0;
}