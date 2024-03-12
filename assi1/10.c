#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, A, s;
    printf("enter a b c :");
    scanf("%f %f %f", &a, &b, &c);
    p = a + b + b + c + a * c;
    printf("perimiter is %f", p);
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\narea is = %f", A);

    return 0;
}
