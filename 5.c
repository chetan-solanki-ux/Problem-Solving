//Accept number from User and Check nu,ber is evevn or odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0
	typedef int BOOL;
int CheckEven(int iNo)
{
	if ((iNo%2)==0)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL iRet=FALSE;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	iRet=CheckEven(iValue);
	if (iRet==1)
	{
		printf("Given number is Evevn%d\n",iValue);
	}
	else
	{
		printf("Given number is ODD%d\n",iValue);
	}
	return 0;
}
