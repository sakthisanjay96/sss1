#include<stdio.h>
int main()
{
char p[10];
int i,count=0;
printf("enter the STRING \n");
scanf("%c",&p[i]);
for(i=0;i<5;i++)
if(p[i]=='a'||p[i]=='A'||p[i]=='e'||p[i]=='E'||p[i]=='i'||p[i]=='I'||p[i]=='o'||p[i]=='O'||p[i]=='u'||p[i]=='U')
{
count++;
}
if(count!=0)
{

printf("it has vowel");
}
else
{
printf("it has no vowel");
}
return 0;
}
