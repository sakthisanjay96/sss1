#include<stdio.h>
int main()
{
int a,count=0;
char s[100];
gets(s);
for(a=0;s[a]!='\0';a++)
{
if(s[a]==' ')
{
count++;
}
}
printf("the number of words are:%d",count+1);
return 0;
}
