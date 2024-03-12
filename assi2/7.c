#include<stdio.h>
int main()
{
    int a;
    printf("enter year\n");
    scanf("%d", &a);
    if(a%4==0 && a%100 != 0){
        printf("leap year");
    }
    else if(a%400 == 0){
        printf("leap year \n");
    }
    else
        printf("not leap");
}