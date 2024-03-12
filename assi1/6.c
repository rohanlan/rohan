// get input from user and print its tabele
#include <stdio.h>
int main()
{
    int num;
    int i;
    printf("enter the number : \n");
    scanf("%d", &num);
    printf("Table is : \n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i * num);
        // printf("%d", (i * num));
    }
    return 0;
}