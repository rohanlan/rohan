#include<stdio.h>
int main(void)
{
	int num,i;
	printf("Enter the value of num ");
	scanf("%d",&num);
	printf("%d= ",num);
	i=2;
	while(i<=num)
	{
	 if(num%i==0){
	 printf("%d",i);
	
	if(num!=1){
	printf("*");
	}
	else{
	i++;
	}
	}
	printf("\n");
return 0;
}
}
