//Accept number form user and print * using while-loop
#include<stdio.h>
void Display(int iNo)
{
	int iCnt =0;
	while(iCnt<iNo)
	{
		printf("*\t");
		iCnt++;
	}
}

int main()
{
	int iValue=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
