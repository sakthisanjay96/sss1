#include<stdio.h>
int main()
{
int p,q,i;
int gcd;
printf("enter the numbers: \n");
scanf("%d%d",&p,&q);
for(i=1;i<=p&&i<=q;i++)
{
if(p%i==0&&q%i==0)
{
gcd=i;
}
}
printf("gcd of %d and %d is: \n%d",p,q,gcd);
return 0;
}
