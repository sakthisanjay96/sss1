#include<stdio.h>
int main()
{
int a,s,p[10],i;
printf("enter the values:");
scanf("%d",&a);
printf("enter the digit:");
scanf("%d",&s);
printf("enter the N digit:");
for(i=0;i<a;i++)
{
scanf("%d",&p[i]);
}
printf("the value is %d",p[s-1]);
return 0;
}
