//Accept no from user if num<10 print Hello other wis print Demo
#include<stdio.h>
void Display(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo<10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}

}
int main()
{
	int iValue =0;
	printf("Enter the number from user :\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
