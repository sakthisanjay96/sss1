#include <stdio.h>
int main()
{
int p,q,r;
printf("enter p and q values: \n");
scanf("%d%d",&p,&q);
r=p*q;
printf("the product of p and q is %d \n",r);
if(p==q)
{
	printf("it is perfect square \n");
}
else
{
	printf("it is not a perfect square \n");
}
return 0;
}
