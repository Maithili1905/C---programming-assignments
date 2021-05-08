/*2. Accept N numbers from user and display all such elements which are 
divisible by 5. 
Input : N : 6 
 Elements : 85 66 3 80 93 88 
Output : 85 80 */

#include<stdio.h>
#include<stdlib.h>


int divisible( int arr[],int isize)
{
	int icnt=0;
	int icheck=0;
	
	for(icnt=0;icnt<isize;icnt++);
	{
		if((arr[icnt] % 2)==0)
		{
			 icheck++;
		}
	}
	return icheck;
}


int main()
{
	int ivalue=0;
	int iret=0;
	int icnt=0;
	int *ptr=NULL;
	
	
	printf("enter value \n");
	scanf("%d \n",&ivalue);
	
	if(ivalue ==0)
	{
		printf("invalid value");
	}
	
	ptr= (int*)malloc(sizeof(int) * ivalue);
	if (ptr==NULL)
	{
		printf("error \n");
		return -1;
	}
	printf("enter the number \n");
	for(icnt=0;icnt<ivalue;icnt++)
	{
		scanf("%d \n",&ptr[icnt]);
	}
	
	iret = divisible(ptr,ivalue);
	
	printf("divisible by 5 is :%d \n",iret);
	
	free(ptr);
	 return 0;
}
	
	
