#include<stdio.h>
int main()
{
int a[10],p,i,n;
printf("enter no.of elements:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
s=a[0];
for(i=1;i<n;i++)
{
if(p>a[i])
{
    p=a[i];
}
}
printf("min num is %d",p);
return 0;
}
