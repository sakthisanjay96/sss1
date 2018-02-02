#include <stdio.h>
void main()
{
int i,j,n,a[n];
scanf("%d",&n);
for(int i=0;i<n;i++)
{	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{printf("%d",a[i]);
}
}
