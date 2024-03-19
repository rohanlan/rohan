#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter the values of num:");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	{
		if(num%i==0&&i==1)
		{
		printf("not prime");
		}
		else
		{
		printf("Number is prime");

		}
	}
return 0;
}
