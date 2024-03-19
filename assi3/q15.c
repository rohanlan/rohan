#include<stdio.h>
int flag;
int main(void)
{
	char choice;
	int num1,num2,result;
	char opr;
	do
	{
	here:
	printf("Enter the values of num1,num2:\n");
	scanf("%d%d",&num1,&num2);
	printf("Enter your operator");
	scanf(" %c",&opr);
	
		
			int result;
			switch(opr)
			{

		case '+':
			result = num1+num2;
			
			printf("%d %c %d = %d\n",num1,opr,num2,result);
			break;
		case '-':
			result = num1-num2;

			
			printf("%d %c %d = %d\n",num1,opr,num2,result);
			break;
			
		case '/':
			if(num2!=0)
		{	result = num1/num2;
			printf("%d %c %d = %d\n",num1,opr,num2,result);}
			else
			{
			printf("Denominator = 0\n");
			}
			break;
		case '*':
			result = num1*num2;
			printf("%d %c %d = %d\n",num1,opr,num2,result);
			break;
			default:
					printf("Invalid operator\n");
			}		
			printf("Do you want to continue (y/n)?\n");
			scanf("%*c%c",&choice);

}while(choice!='n');
}
