#include<stdio.h>
int main()
{
int d,rem=0,sum=0;
scanf("%d",&d);
while(d>0)
{
rem=d%10;
sum=sum+rem;
d=d/10;
}
printf("%d",sum);
return 0;
}
