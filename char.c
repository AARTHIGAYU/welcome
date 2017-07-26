#include<stdio.h>
int main()
{
char c;
printf("Enter a character");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("The character is an alphabet");
else
printf("The character is not an alphabet");
return 0;
}
