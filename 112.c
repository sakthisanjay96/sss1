#include<stdio.h>
int main()
{
int n,p,i;
int a[100],c=0;
printf("enter n and p values:");
scanf("%d%d",&n,&p);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==p)
c++;
}
if(c!=0)
printf("yes");
else
printf("no");
return 0;
}
