//accept two number Display1 st number second number time
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
if(iFrequency<=0)
{
iFrequency=-iFrequency;	
}
int iCnt=0;
	for (iCnt=1;iCnt<=iFrequency;iCnt++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	printf("Enter the 2 number that 1 st number 2 is no of 1st number will prin");
	scanf("%d",&iValue1);
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);
	return 0;
}
