#include <stdio.h>

int main()
{
    int year;
    int month;
    int date;
    int odd;

    printf("Enter year : \n");
    scanf("%d", &year);

    printf("Enter month : \n");
    scanf("%d", &month);

    printf("enter dd :\n");
    scanf("%d", &date);

    int newy = year - 1;
    int d = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("leap\n") : printf("not\n");

    switch (month)
    {
    case 1:
        odd = date % 7;
        break;
    case2:
        if (d == 5)
            odd = 5;
        else
            odd = 4;
        break;
    case 3:
        if (d == 5)
            odd = 1;
        else
            odd = 0;
        break;
    case 4:
        if (d == 5)
            odd = 3;
        else
            odd = 2;
        break;
    case 5:
        if (d == 5)
            odd = 6;
        else
            odd = 5;
        break;
    case 6:
        if (d == 5)
            odd = 1;
        else
            odd = 0;
        break;
    case 7:
        if (d == 5)
            odd = 4;
        else
            odd = 3;
        break;
    case 8:
        if (d == 5)
            odd = 0;
        else
            odd = 6;
        break;
    case 9:
        if (d == 5)
            odd = 2;
        else
            odd = 1;
        break;
    case 10:
        if (d == 5)
            odd = 3;
        else
            odd = 2;
        break;
    case 11:
        if (d == 5)
            odd = 2;
        else
            odd = 1;
        break;
    case 12:
        if (d == 5)
            odd = 5;
        else
            odd = 4;
        break;
    }
    printf("\n%d\n", odd);
    int c = ((newy % 4 == 0 && newy % 100 != 0) || (newy % 400 == 0)) ? printf("leap\n") : printf("not\n");
    if (c == 5)
    {
        odd += 2;
        printf("\nodd = %d\n", odd); // 5
        odd = odd % 7;
        printf("odd = %d\n", odd); // 5
    }
    else
    {
        odd += 1;
        odd = odd % 7;
    }

    odd = (date + odd) % 7;
    printf("%d\n", odd); // 3

    switch (odd)
    {
    case 0:
        printf("Saturday\n");
        break;
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    default:
        printf("Invalid day of week\n");
        break;
    }

    return 0;
}