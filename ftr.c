#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("\n Enter the no");
scanf("%d",&n);
for(i=1;i<n;i++)
fact=fact*i;
print("\n The factorial is %d=%d",n,fact);
}
