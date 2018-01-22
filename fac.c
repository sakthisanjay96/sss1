#include <stdio.h>
void main()
{
int n, i;
int s=1;
printf("Enter an integer:");
scanf("%d",&n);
 
 if (n<0)
{
printf("1");
}
else
{
for(i=1;i<=n;++i)
{
s*=i;
}
printf("\n%d", s);
}
}
