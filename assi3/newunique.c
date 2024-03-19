#include<stdio.h>
int main(void)
{
	int i=1,j,k;
	printf("Enter the value of j : ");
	scanf("%d",&j);
	while(j%i==0)
	{
    {
	k=j/i;
	printf("%d*%d=%d\n",i,k,j);
	i++;
	}
}



return 0;
}
