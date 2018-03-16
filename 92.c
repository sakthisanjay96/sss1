
#include<stdio.h>
int main()
{
int n,i,p[10];
int sum=0;
printf("no.of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
{
for(i=0;i<n;i++)
sum=sum+p[i];
printf("%d",sum);
}
return 0;
}
