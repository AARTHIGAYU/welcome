#include<stdio.h>
int main()
{
      int num,count,limit;
      printf("\nEnter a Number:\t");
      scanf("%d", &num);
      printf("\nEnter the Limit:\t");
      scanf("%d", &limit);
      for(count = 1; count <= limit; count++)
      {
            printf("%d X %d = %d\n", num, count, (num*count));
      }
      return 0;
}
