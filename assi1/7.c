#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int face_val1 = num / 1000;
    int face_val2 = (num / 100) % 10;
    int face_val3 = (num / 10) % 10;
    int face_val4 = num  % 10;
    printf("face values are :\n");
    printf("%d  %d  %d  %d\n", face_val1, face_val2, face_val3, face_val4);
    printf("place value : \n");
    printf("%d = %d + %d + %d + %d\n", num, face_val1 * 1000, face_val2 * 100, face_val3 * 10, face_val4);

    printf("number in reverse is :\n");
    printf("%d%d%d%d", face_val4, face_val3, face_val2, face_val1);
    return 0;
}
