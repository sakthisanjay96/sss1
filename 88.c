#include<stdio.h>
int main()
{
int p,q,i;
int lcm,gcd;
printf("enter the numbers: \n");
scanf("%d%d",&p,&q);
for(i=1;i<=p&&i<=q;i++)
{
if(p%i==0&&q%i==0)
{
gcd=i;
}
}
lcm=(p*q)/gcd;
printf("lcm of %d and %d is: \n%d",p,q,lcm);
return 0;
}
