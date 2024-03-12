#include<stdio.h>
int main()
{
    int a;
    printf("enter year\n");
    scanf("%d", &a);
    if(a%100 == 0){
        if(a%400 == 0){
            printf("leap year\n");
        }
        else
            printf("not leap");
    }
    else if(a%4 == 0){
        printf("leap year \n");
    }
    else
        printf("not leap");
}