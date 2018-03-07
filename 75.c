#include<stdio.h>
#include<conio.h>
int main()
{
char str[10];
int p;
clrscr();
printf("enter the string:");
scanf("%s",&str);
p=strlen(str);
if(p%2==0)
{
str[(p/2-1)]='*';
str[p/2]='*';
}
else
{
str[p/2]='*';
}
printf("%s",str);
return 0;
}
