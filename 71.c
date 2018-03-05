#include<stdio.h>
int main()
{
int num,rev=0,p,temp;
printf("enter the number:");
scanf("%d",&num);
p=num;
while(p!=0)
{
rev=rev*10;
rev=rev+p%10;
temp=p/10;
}
if(num==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
