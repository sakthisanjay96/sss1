#include "stdio.h"
int main()
{
int n,k,i,j,t;
int p[100],c=0;
printf("enter n and k values:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;j<n;i++)
{
if(p[i]>p[j])
t=p[i];
p[i]=p[j];
p[j]=t;
}
printf(" kth smallest number is  \n%d",p[k-1]);
return 0;
}
