#include<stdio.h>
int main()
{
int p,q,r;
printf("enter the number:");
scanf("%d %d",&p,&q);
r=p-q;
if(r%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
