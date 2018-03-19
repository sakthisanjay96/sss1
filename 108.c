#include<stdio.h>
int main()
{
int p,d,n;
printf("enter the first term:");
scanf("%d",&p);
printf("enter difference:");
scanf("%d",&d);
printf("enter no of terms:");
scanf("%d",&n);
int sum=0,i;
for(i=0;i<n;i++)
{
sum=sum+(p+i*d);
}
printf("%d",sum);
return 0;
}
