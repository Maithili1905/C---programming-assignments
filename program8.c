/*
Problem statement :
 Accept number from user and check whether that number is perfect or not.
 
Input : 12         Output :   Not a perfect number
Input : 6           Output :   Perfect number   (1+2+3)
Input : 28         Output :   Perfect number    (1+2+4+7+14)
 */


#include<stdio.h>       // REquired for printf and scanf

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckPerfect(int);

BOOL CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    
    if(iNo < 0)             // updator for negative values
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))        // Filter
    {
        return FALSE;
    }
    
   
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    if(iSum == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()          // Entry point function
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);      // Function call    
    
    if(bRet == TRUE)
    {
        printf("It is Perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
    
    return 0;
}















