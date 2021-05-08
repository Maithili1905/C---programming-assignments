/*
 Problem statement :
 Write a program which accept number of rows and coluns from user and display below pattern:
 
Input :   (Row = 4 Columns = 4)
Output :
 
 *  *   *   *
 $  $   $   $
 *  *   *   *
 $  $   $   $

*/
#include<stdio.h>

void Pattern(int iRow, int iCol)            // if else condition gets checked for iRow times
{
    int i = 0, j = 0;
    
    for(i = 1; i<= iRow; i++)           // To iterate rows
    {
        if((i % 2) == 0)                    // For even row
        {
            for(j = 1; j<= iCol; j++)   // To iterate columns
            {
                printf("$\t");
            }
        }
        else                                       // For odd row
        {
            for(j = 1; j<= iCol; j++)   // To iterate comlumns
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}




int main()
 {
     int iValue1 = 0, iValue2 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     printf("Enter second number\n");
     scanf("%d",&iValue2);
     
     PatternXXX(iValue1, iValue2);
     
     return 0;
 }









