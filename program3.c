//division of two numbers

#include<stdio.h>

int Division(int,int);

int Division(int iValue1, int iValue2)
{
  int iRet=0;
 
  iRet=iValue1/iValue2;

   return iRet;

}   
int main()
{
 int iNo1=0;
 int iNo2=0;
 int iAns=0;
 
 printf("enter the frst num \n");
 scanf(" %d \n",iNo1);
 
 printf("enter the second num \n");
 scanf(" %d \n",iNo2);
 
 iAns=Division(iNo1,iNo2);
 
 printf("division is %d ",iAns);
 

return 0;
}
