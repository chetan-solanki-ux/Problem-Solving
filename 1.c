//Acept one number from user and print that number of * 
#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for (iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}

}

int main()
{
	int iValue =0;
	printf("Enter the number of * which u want to print");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
