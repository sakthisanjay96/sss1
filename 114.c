#include "stdio.h"
int main()
{
int n,p,i,j;
int a[100],c=0;
printf("enter n and p values:");
scanf("%d%d",&n,&p);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
c++;
}
if(c==p)
{
printf("odd number is \n%d",a[i]);

break;
}
}
return 0;

}
