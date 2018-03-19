#include<stdio.h>
int main()
{
int a,b,i,p=1;
printf("enter the values:");
scanf("%d%d",&a,&b);
for(i=0;i<b;i++)
{
p=p*a;
}
printf("%d",p);
return 0;
}
