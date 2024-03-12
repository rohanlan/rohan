#include <stdio.h>

int main()
{
    float F;
    printf("enter in farhinite :\n");
    scanf("%f", &F);
    float val = ((F - 32) * (5 / 9.0f));
    printf("value in  is celcius : %f\n", val);

    // float C;
    // printf("enter in celcius :\n");
    // scanf("%f", &C);
    // float val = (C*9/5)+32;
    // printf("value in  is farinite : %f\n", val);
    return 0;
}
