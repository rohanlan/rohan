#include<stdio.h>
int main()
{
    int a;
    printf("enter quantity\n");
    scanf("%d", &a);
    if(a<=30){
        printf("price : %d\n", a * 5);
    }
    else if(a >30 && a<=50){
        float b = (a * 5 * 10) / 100.0f;
        printf("price is : %.2f \n",(a*5)-b);
    }
    else if (a>50){
        float c = (a * 5 * 15) / 100.0f;
        printf("price is : %.2f \n", (a*5) - c);
    }
}
