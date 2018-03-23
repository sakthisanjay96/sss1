#include<stdio.h>
int main()
{
int a[50],p,c,i,count=0;
scanf("%d%d",&p,&c);
for(i=0;i<p;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<p;i++)
{
if(a[i]==c)
{
count++;
}
}
printf("%d time",count);
}
