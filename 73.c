#include<stdio.h>
int main()
{
int p,q,r;
printf("enter the number:");
scanf("%d",&p);
printf("\nleft and right numbers:");
scanf("%d%d",&q,&r);
if(p>q&&p<r)
{
	printf("\nyes");
}
else
{
	printf("\nno");
}
return 0;
}
