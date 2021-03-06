/*
Problem statement :
 Accept number from user and display factors of that number.
 
 Input : 12         Output :   1    2   3   4   6
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
 
            Iterate till the counter is less than the number ie no
                check whether the cnt divides the no completetly
                    if yes
                        then display the counter
                incremnet the value of counter by 1
 
            continue to the iteration
    END
*/

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :    None
//  Description :   It is used to display the factors
//  Autor : maithili gavli
// 
//
//////////////////////////////////////////////////////////////


#include<stdio.h>       // REquired for printf and scanf

void DisplayFactor(int);

void DisplayFactor(int iNo)        
{
    int iCnt = 0;                        
    
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iNo % iCnt) == 0)        
       {
               printf("%d\n",iCnt);
       }
    }
}

#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);      
    
    return 0;
}
