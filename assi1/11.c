#include <stdio.h>
#include <limits.h>
#include<float.h>
int main()
{
    char ch;

     printf("size of char = %d byte  \n min range = %d \n max range = %d\n", sizeof(ch), SCHAR_MIN, SCHAR_MAX);
     printf("----------------------------------------------------------------------------------\n");
     printf("size of unsigned char = %d byte  \n max range = %d \n ", sizeof(ch), UCHAR_MAX);
      printf("----------------------------------------------------------------------------------\n");
     printf("size of short = %d byte  \n min range = %d \n max range = %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
      printf("----------------------------------------------------------------------------------\n");
     printf("size of int = %d byte  \n min range = %d \n max range = %d\n", sizeof(int), INT_MIN, INT_MAX);
      printf("----------------------------------------------------------------------------------\n");
     printf("size of long = %d byte  \n min range = %d \n max range = %lu\n", sizeof(long), LONG_MIN, LONG_MAX);
 printf("----------------------------------------------------------------------------------\n");
     printf("size of long-long = %d byte  \n min range = %lli \n max range = %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
      printf("----------------------------------------------------------------------------------\n");
     printf("size of float = %d byte  \n min range = %e \n max range = %e\n", sizeof(float), FLT_MIN, FLT_MAX);
      printf("----------------------------------------------------------------------------------\n");
     printf("size of double = %d byte  \n min range = %E \n max range = %E\n", sizeof(double), DBL_MIN, DBL_MAX);
    return 0;
}
