#include<stdio.h>
int main()
{
int rev=0,p;
printf("enter the value:\n");
scanf("%d",&p);
while(p!=0)
{
rev=rev*10;
rev=rev+p%10;
p=p/10;
}
printf("reverse of number is \n%d",rev);
return 0;
}
