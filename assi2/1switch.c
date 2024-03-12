#include <stdio.h>

int main()
{
    enum days
    {
        JAN = 1,FEB,MAR,APR,MAY,JUNE,JULY,AUG,SEPT,OCT,NOV,DEC
    };
    // enum calculator c1;//ok OR
    int year;
    enum days month;

    printf("Enter year : \n");
    scanf("%d", &year);
    // int c = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("leap\n") : printf("not\n");

    printf("Enter month : \n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("JAN = 31");
        break;
    case FEB:                                  // fieldname or number represent to fieldname
        ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("FEB = 29\n") : printf("FEB = 28\n");
        // if (c == 4)
        //     printf("FEB = 28");
        // else
        //     printf("FEB = 29");
        break;
    case MAR:                                 // fieldname or number represent to fieldname
        printf("MARCH = 31");
        break;
    case 4:
        printf("APRIL = 30");
        break;
    case 5:
        printf("MAY = 31");
        break;
    case 6:
        printf("JUNE = 30");
        break;
    case JULY:                                   // fieldname or number represent to fieldname
        printf("JULY = 31");
        break;
    case 8:
        printf("AUG = 31");
        break;
    case 9:
        printf("SEPT = 30");
        break;
    case 10:
        printf("OCT = 31");
        break;
    case 11:
        printf("NOV = 30");
        break;
    case 12:
        printf("DEC = 31");
    }

    return 0;
}