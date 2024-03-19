#include <stdio.h>
int main()
{
    int a;
    printf("Enter year : \n");
    scanf("%d", &a);
    int x = ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) ? printf("leap year") : printf("not a leap year");
    //printf("\nx = %d", x);
    if (x == 15)
    {
        int b;
        printf("\n enter month (1-12) : \n");
        scanf("%d", &b);
        if (b == 4 || b == 6 || b == 9 || b == 11)
        {
            printf("%d %d : 30 days\n", a, b);
        }
        else if (b == 2)
        {
            printf("%d %d : 28 days\n", a, b);
        }
        else
        {
            printf("%d %d : 31 days\n", a, b);
        }
    }
    else
    {
        int b;
        printf("\n enter month (1-12) : \n");
        scanf("%d", &b);
        if (b == 4 || b == 6 || b == 9 || b == 11)
        {
            printf("%d %d : 30 days\n", a, b);
        }
        else if (b == 2)
        {
            printf("%d %d : 29 days\n", a, b);
        }
        else
        {
            printf("%d %d : 31 days\n", a, b);
        }
    }
}
