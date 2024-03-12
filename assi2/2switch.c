#include <stdio.h>

int main()
{
        // enum calculator
        // {
        //         ADD = 1,SUB,MUL,div
        // };
        // enum calculator c1;//ok OR
        int num1, num2, res;
        // typedef enum calculator calsi;
        // calsi c1;

        printf("Enter num1 : ");
        scanf("%d", &num1);
        printf("Enter num2 : ");
        scanf("%d", &num2);

        printf("1.Addition \n");
        printf("2.Subtraction \n");
        printf("3.Multiplication \n");
        printf("4.Division \n");
        printf("Enter choice : ");
        int c1;
        scanf("%d", &c1);
        // scanf("%d", &c1);

        switch (c1)
        {
        case 1:
        Add:
        hi:
        hello:
                res = num1 + num2;
                printf("Add = %d \n", res);
                break;
        case 2:
        SUB:
                res = num1 - num2;
                printf("Sub = %d \n", res);
                break;
        case 3:
        MUL:
                res = num1 * num2;
                printf("MUL = %d \n", res);
                break;
        case 4:
        div:
                res = num1 / num2;
                printf("DIV = %d \n", res);
                break;

        default:
                printf("Invalid Choice\n");
                break;
        }
        return 0;
}