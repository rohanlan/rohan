#include<stdio.h>
int main(void)
{
	int num,i=1;
	printf("Enter the value of num : ");
	scanf("%d",&num);
	while(i<num)
{
while(num%i==0)
{
	printf("%d\n",i);
	i++;

	}
	i++;

}




return 0;
}
