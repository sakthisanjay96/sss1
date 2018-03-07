#include<stdio.h>
int main()
{
int p,i;
printf("enter the number:");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
	if(p%i==0)
	
	printf("\n%d \t",i);
}
return 0;
}
