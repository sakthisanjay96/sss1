#include<stdio.h>
#include<string.h>
int main()
{
char p[100];
int i;
printf("enter the string:");
gets(p);
int a=0,d=0;
for(int i=0;p[i]!=0;i++)
{
if((p[i]>='a'&& p[i]<='z') || (p[i]>='A' && p[i]<='Z'))
{
a++;
}
if(p[i]>='0' && p[i]<='9')
{
d++;
}
}
if(a>=1 && d>=1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
