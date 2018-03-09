#include<stdio.h>
int main()
{
char ch[50];
int i,p;
printf("enter something:");
scanf("%s",&ch);
p=strlen(ch);
for(i=0;i<p;i++)
{
if(i%2==0)
{
printf("%c",ch[i]);
}
}
for(i=0;i<p;i++)
{
if(i%2==1)
{
printf(" \n %c",ch[i]);
}
}
return 0;
}
