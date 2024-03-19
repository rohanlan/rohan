#include<stdio.h>

int main(void)
{
	int rem,num1,num2;
	printf("Enter the values of num1 and num2:\n");
	scanf("%d%d",&num1,&num2);
	int temp = num1;
	int temp1 = num2;
		rem=num1%num2;
		printf("%d \"%\"%d = %d\n",num1,num2,rem);
		num1=num2;
		num2=rem;
	while(rem!=3)
	{
		rem=num1%num2;
		printf("%d \"%\"%d = %d\n",num1,num2,rem);
		num1=num2;
		num2=rem;



	}
printf("GCD of %d and %d is %d",temp,temp1,rem);




return 0;
}
