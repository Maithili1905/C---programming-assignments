/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :   (Row = 4 Columns = 4)
Output :
 
 *  *   *   *
 *  *   *   *
 *  *   *   *
 *  *   *   *
 
Input :    4, 5    ->  (Row = 4 Columns = 5)
Output :
  
  *  *   *   *  *
  *  *   *   *  *
  *  *   *   *  *
  *  *   *   *  *

 Input :    2, 6    ->  (Row = 2 Columns = 6)
 Output :
  
  *  *   *   *  *   *
  *  *   *   *  *   *

 printf("Roj 2 tas study");


 for(i = 1; i< = 31; i++)
 {
     printf("Roj 2 tas study");
 }


 for(j = 1; j<=8; j++)
 {
     for(i = 1; i< = 31; i++)
     {
         printf("Roj 2 tas study");
     }
 }

  ---------------------------------------------
  Display 1 * on screen          *
         
  printf("*");

  ---------------------------------------------
  
 Display 4 * on screen
 *   *   *   *

  for(i = 1; i<= 4; i++)
  {
     printf("*\t");
  }
  
  ---------------------------------------------
 
 Display below pattern
 *  *   *   *
 *  *   *   *
 *  *   *   *
 *  *   *   *
 
 
for(iCnt = 1; iCnt<= 4; iCnt++)
 {
    for(i = 1; i<= 4; i++)
    {
       printf("*\t");
    }
 }
 
 */

#include<stdio.h>

void Pattern(int iRow, int iCol)        
{
    int i = 0, j = 0;
    
    
   
    for(i = 1; i<= iRow; i++)           // Outer loop
    {
        //      1          2        3
        for(j = 1; j<= iCol; j++)       // Inner loop
        {
            printf("*\t");    // 4
        }
        printf("\n");
    }
}



int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
    
    Pattern(iValue1, iValue2);
    
    return 0
}





