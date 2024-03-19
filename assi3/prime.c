#include<stdio.h>
int main(void)
{
	int i=2,k;
	printf("Enter the value of k :\n");
	scanf("%d",&k);
	while(i<=k)
	{
	if(k%i==0)
{	here:
k=k/i;
	printf("%d* ",i);
if(k%i==0)
{
goto here;
}
}
	
	i++;
}
return 0;
}
