#include <stdio.h>
int main()
{
    int i, start, end;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All odd numbers from %d to %d are: \n", start, end);
    if(start%2==0)
{
    start++;
}
    for(i=start; i<=end; i+=2)
{
    printf("%d\n", i);
}
 
    return 0;
} 
 
