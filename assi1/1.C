/*WRITE A PROGRAM TO ACCEPT VALUES FROM USER AND PERFORM FURTHER OPERATRIONS
SUM SUBSTRACTION PRODUCT
*/

#include <stdio.h>
int main()
{
    // // with integer...
    // int a;
    // printf("Enter first number\n");
    // scanf("%d", &a);
    // int b;
    // printf("Enter second number\n");
    // scanf("%d", &b);
    // printf("sum of two numbers is : %d\n", a + b);
    // printf("difference of two numbers is : %d\n", a - b);
    // printf("product of two numbers is : %d\n", a * b);
    // // return 0; // not compulsury terminates the program.

    // // with float....

    // float c;
    // printf("Enter first float number\n");
    // scanf("%f", &c);
    // float d;
    // printf("Enter second float number\n");
    // scanf("%f", &d);
    // printf("sum of two numbers is : %f\n", c + d);
    // printf("difference of two numbers is : %f\n", c - d);
    // printf("product of two numbers is : %f\n", c * d);

    //with char....
    char e;

    printf("Enter first char\n");
    scanf("%c", &e);
    char f;
    printf("Enter second char\n");
    scanf("%*c%c", &f);
    printf("sum of two char is : %d\n", e+f);
    printf("difference of two char is : %d\n", e - f);
    printf("product of two char is : %d\n", e * f);

    // //with unsigned int....
//     unsigned int g;
//     printf("Enter first unsigned int\n");
//     scanf("%u", &g);
//     unsigned int h;
//     printf("Enter second unsigned int\n");
//     scanf("%u", &h);
//     printf("sum of two unsigned int is : %u\n", g+h);
//     printf("difference of two unsigned int is : %u\n", g - h);
//     printf("product of two unsigned int is : %u\n", g * h);

    return 0;
    
 }
