
#include <stdio.h>
void main()
{
    // with multiple printf
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    
    printf("\n");
    // with one printf
    printf("*\n**\n***\n****\n*****");
     printf("\n");
    
    // with for loop
    for(int i =1;i<=5;i++)
    {
        for(int j =1;j<=i;j++)
    {
    printf("*");
    }
        
    printf("\n");
    
    };
    
    
    return 0;
}
