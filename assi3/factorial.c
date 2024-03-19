#include<stdio.h>
int main(void)
{
int i=1,num,fact=1;
printf("Enter the value of num \n");
scanf("%d",&num);
while(i<=num)
{
	i++;
	fact=fact*i;
}
printf("Factorial is :%d\n",fact);
return 0;
}
