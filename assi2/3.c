#include <stdio.h>


int main()

{ 
    int a;
    printf("enter a number \n");
     
     scanf("%d",&a);
   
     if(a>0){
     printf(" number is positive");
     }
     else if(a<0) {
        
         printf("number is negetive");
    }else 
    printf("given number is zero");
    
    return 0;
}
