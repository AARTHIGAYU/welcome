#include <stdio.h>
int main()
{
int n, reversed Int = 0, remainder, original Int;
printf("Enter an integer");
scanf("%d",&n);
original Int=n; 
while( n!=0 )
{
remainder = n%10;
reversed Int= reversed Int*10 + remainder;
n /= 10;
}
if (original Int == reversed Int)
printf("%d is a palindrome", original Int);
else
printf("%d is not a palindrome", original Int);
return 0;
}
