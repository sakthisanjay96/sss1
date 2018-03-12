#include<Stdio.h>
void main()
{
int n[10],p,i;
printf("enter the numbers:");
scanf("%d",&p);
printf("enter the values:");
for(i=1;i<=p;i++)
scanf("%d",&n[i]);
for(i=1;i<=p;i++)
{
if(n[i]!=i)
{
printf("%d",i);
}
}
}
