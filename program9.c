/*
Problem statement :
Accept number from user and return the number of even digits from that numvber.

 Input : 1278   Output : 2
 Input : 127    Output : 1
 Input : 27   Output : 1
 Input : 2   Output : 1
 Input : -56    Output : 1
 Input : 0      Output : 1
 Input : 1005   Output : 2
 */

//////////////////////////////////////////////////////////////
//
//  Function name : CountEvenDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of even digits
//  Autor :maithili gavli
//
//////////////////////////////////////////////////////////////
#include<stdio.h>       // REquired for printf and scanf

int CountEvenDigits(int);
int CountEvenDigits(int iNo)                
{
    int iCnt = 0;                           
    int iDigit = 0;                          
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountEvenDigits(iValue);
    
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;       // Sucess to OS
}













