/*
Problem statement :
 Accept number from user and return the addition of factors of that number.
 
 Input : 12         Output :   16   (1  +  2 +  3 +  4  + 6)
  Input : 10         Output :   8   (1  +  2 +  5)
  Input : 11         Output :   1   (1)
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
            Create one variable to store the addtion as ans
 
            Iterate till the counter is less than the number/2 ie no/2
                check whether the cnt divides the no completetly
                    if yes
                        then add the value of cnt into the ans
                incremnet the value of counter by 1
 
            continue to the iteration
 
            return the value of ans
    END
*/

//////////////////////////////////////////////////////////////
//
//  Function name : SumOfFactor
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to perform the addition the factors
//  Autor : maithili gavli

//
//////////////////////////////////////////////////////////////


#include<stdio.h>       // REquired for printf and scanf

int SumOfFactor(int);

int SumOfFactor(int iNo)
{
    int iSum = 1;       // Used to store the addition of factors
    int iCnt = 0;         // Used for loop counter
    
    // Filter
    if(iNo == 0)        // If the input number is 0
    {
        return 0;
    }
    
    // Input updator
    if(iNo < 0)             // If the input is negative
    {
        iNo = -iNo;         // convert that negative number into positive number
    }
    
   
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    return iSum;
}

int main()          // Entry point function
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = SumOfFactor(iValue);      // Function call    Dukanat ja
    
    printf("Addition of factors is : %d\n",iRet);
    
    return 0;
}










