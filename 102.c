#include<stdio.h>
int main()
{
int n,p;
printf("enter the number:");
scanf("%d",&n);
if(n%2==0)
{
p=n/2;
printf("%d",p);
}
else
{
printf("%d",n);
}
return 0;
}
