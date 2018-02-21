#include<stdio.h>
int main()
{
int p[50],n,i,j,k;
printf("no.of array elements:");
scanf("%d",&n);
printf("\nenter the values:");
for(i=0;i<n;i++)
scanf("%d",&p[50]);
j=p[0];
for(i=1;i<n;i++)
{
if(j<p[i])
i++;
}
printf("%d",j);
return 0;
}
