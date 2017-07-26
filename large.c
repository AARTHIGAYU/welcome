#include<stdio.h>
int main()
{
double n1,n2,n3;
printf("Enter the three different numbers");
scanf("%f %f %f",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
printf("n1 is the largest number");
if(n2>=n1 && n2>=n3)
printf("n2 is the largest number");
if(n3>=n1 && n3>=n2)
printf("n3 is the largest number");
return 0;
}
