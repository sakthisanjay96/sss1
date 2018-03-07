#include<stdio.h>
int main()
{
int n,i,p=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
p++;
}
}
if(p==2)
{
printf("\nthe number is prime");
}
if(p!=2)
{
printf("\nthe number is composite");
}
return 0;
}
