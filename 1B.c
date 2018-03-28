#include<stdio.h>
int main()
{
int n,f;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
	f=n*f;
	n--;
}
printf("\nfactorial of number is :%d",f);
return 0;
}
