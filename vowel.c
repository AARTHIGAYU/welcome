#include<stdio.h>
int main()
{
char c;
int lower case vowel,upper case vowel;
printf("Enter an alphabet");
scanf("%c",&c);
lower case vowel=(c=='a'||c=='b'||c=='i'||c=='o'||c=='u');
upper case vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lower case||upper case vowel)
printf("%c is a vowel");
else
printf("%c is a consonant");
return 0;
}
