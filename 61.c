#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,n,p;
gets(s);
printf("enter the number:");
scanf("%d",&p);
n=strlen(s);
for(i=0;i<p;i++)
{
printf("\n%c",s[i]);
}
return 0;
}
