/*
    Problem statement : Accept two numebrs from user and return its addition.
*/
 
/*
    Algorithm
 
    START
 
        Accept first number as no1
        Accept second number as no2
        
        Create one variable as ans
 
        Perform addition of no1 & no2
        Store the result in ans
 
        return the value from ans
 
    stop
 */

////////////////////////////////////////////////////////////////////
//
//  Function Name :         Addition
//  Input :                      Integrer, Interger
//  Output :                    Interger
//  Description:               It is used to perform addition
//  Author name :            Maithili gavli
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>       // Used for IO functions

int Addition(int,int);    // Function prototype

int Addition(
                    int iValue1,        // First number
                    int iValue2         // Second numbber
                )
{
    int iAns = 0;                      // Local variable to store addistion
    
    iAns = iValue1 + iValue2;
    
    return iAns;                        // Return the addition
}

int main()                      // Entry point function
{
    int iNo1 = 0;              // Local variables
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    iRet = Addition(iNo1,iNo2);
    
    printf("Addition is : %d \n",iRet);
    
    return 0;
}
