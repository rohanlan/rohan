#include <stdio.h>
int main()
{
    int a, digit1 , digit2 , digit3 , digit4 , digit5;
    printf("enter 5 digit number :\n");
    scanf("%d", &a); //12321
    digit1 = a / 10000;
    digit2 = (a / 1000) % 10;
    digit3 = (a / 100) % 10;
    digit4 = (a / 10) % 10;
    digit5 = a % 10;
    if (digit1==digit5 && digit2 == digit4)
        printf("palindrome");
        else
        printf("not palindrome");

}