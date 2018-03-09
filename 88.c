#include<stdio.h>
int main()
{
int a,b,i;
int lcm,gcd;
printf("enter the numbers: \n");
scanf("%d%d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{
gcd=i;
}
}
lcm=(a*b)/gcd;
printf("lcm of %d and %d is: \n%d",a,b,lcm);
return 0;
}
