#include <stdio.h>
int main()
{
int a,m;
clrscr();
printf("enter the number:");
scanf("%d",&a);
while(a!=0)
{
a=a%2;
if(m==1)
{
a=a/2;
printf("yes");
}
else
{
printf("no");
}
return 0;
}
}
