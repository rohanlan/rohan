#include <stdio.h>
int main()
{
    char ch;
    printf("enter char : ");
    // scanf("%c",&ch); or
    ch = getchar();

    if (ch >= 65 && ch <= 90)
        printf("Uppecase \n");
    else if (ch >= 97 && ch <= 122)
        printf("Lowercase\n");
    else if (ch >= 48 && ch <= 57)
        printf("Digit \n");
    else if (ch == 32)
        printf("Space \n");
    else
        printf("Other char \n");

    return 0;
}