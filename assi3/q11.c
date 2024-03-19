#include<stdio.h>
int main(void)
{
	int num,fact=1;
	printf("Enter the value of num :");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
	{
	fact=fact*i;
	}

	printf("Factorial is :%d\n",fact);





return 0;
}
