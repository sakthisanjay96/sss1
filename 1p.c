#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
printf("enter the string:\n");
scanf("%s",&s);
strrev(s);
printf("reverse of a string \n%s",s);
return 0;
}
