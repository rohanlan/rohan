// max of three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf(" enter three numbers : \n");
    scanf("%d%d%d", &a, &b, &c);
    // if (a > b){
    //     if(a>c)
    //     printf("A");
    //     else
    //     printf("C");
    // }
    // else if(b>a){
    //     if(b>c)
    //     printf("B");
    //     else
    //     printf("C");
    // }
    
          //     ----------true----------------------    ----------false-------------------
    (a > b) ? ((a > c) ? printf("A") : printf("C")) : ((b > c) ? printf("B") : printf("C"));

}