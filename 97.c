#include<stdio.h>
int main()
{
int n,p=0,rm;
printf("enter the numbers: \n");
scanf("%d",&n);
while(n!=0)
{
rm=n%10;
p=(p*10)+rm;
n=n/10;
}
printf("the reversed number is \n%d",p);
return 0;
}
