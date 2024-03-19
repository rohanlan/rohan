#include <stdio.h>

int main() {
    int base, index,result = 1;
    
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the index: ");
    scanf("%d", &index);

    for (int i = 0; i < index; i++)
	{
        result *= base;
    }
    
    printf("Output: %d\n", result);
    
    return 0;
}

