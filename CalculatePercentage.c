#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//Function Name : CalculatePer
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This Function Takes fMarks as Arguments/Input And returns Percentage   
///////////////////////////////////////////////////////////////////////////

float CalculatePer(float fMarks)
{
    float percentage;
    percentage = ((fMarks/400)*100);
    return percentage;
}

//////////////////////////////////////////////////////////////////////////
//Function Name : CheckGrade
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This Function Takes Percentage as Arguments/Input and Returns the grade Of student
///////////////////////////////////////////////////////////////////////////

 CheckGrade( float Per)
{
    if(Per>=40 && Per<60)
    {
        printf("Grade D\n");
    }
    else if (Per>=60 && Per<70)
    {
        printf("Grade C\n");
        
    }
    
    else if (Per>=70 && Per<80)
    {
        printf("Grade B\n");
           
    }
    
    else if (Per>=80 && Per<90)
    {
        printf("Grade A\n");

    }
    
    else if (Per>=90 && Per<=100)
    {
        
        printf("Grade A++\n");
    }

    else if(Per<40)
    {
        printf("TRY HARDER NEXT TIME\n YOU CAN DO IT\n");
            
    }
    else 
    {
        printf("Invalid Percentage \n");
    }
}


int main()  //Entry Point Function
{
    //Varible Declarations
    float fChem=0.0;
    float fEng=0.0;
    float fMath=0.0;
    float fBio=0.0;
    float fTotalMarks=0.0;
    float fpercentage=0.0;

    //Accept The Marks of Student
    printf("Enter the Marks of Chememistry\n");
    scanf("%f",&fChem);

    printf("Enter the Marks of English\n");
    scanf("%f",&fEng);

    printf("Enter the Marks of Biology\n");
    scanf("%f",&fBio);

    printf("Enter the Marks of Mathematics\n");
    scanf("%f",&fMath);

    
    //Calculating total  of Marks and Displaying Total Marks
    fTotalMarks = fBio+fChem+fMath+fEng;       
    printf("Total Marks of All Subject:%f\n",fTotalMarks);

    fpercentage = CalculatePer(fTotalMarks);  //Calling Function CalculatePer

    printf("Total Percentage=%f\n",fpercentage); 
    
    CheckGrade(fpercentage);        //Calling Function CheckGrade
    
    return 0; 
}