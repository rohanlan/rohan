#include <stdio.h>


int main()

{ 
    int a,b,c;
    printf("enter two numbers that you want to devide \n");
     printf("first enter devident  \n");
     scanf("%d",&a);
     printf("now enter devider\n");
     scanf("%d",&b);
     if(b==0){
     printf(" devider cannot be zero");
     }
     else {
        c=a/b;
         printf("your answer is %d",c);
    }
    
    return 0;
}
