#include "stdio.h"
int main()
{
int n,p=0;
printf("enter the value:\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
p++;
}
printf("%d",p);
return 0;
}
