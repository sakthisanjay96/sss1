#include<stdio.h>
int main()
{
int a[25],i,p=0;
for(i=0;i<10;i++)
{
printf("\nenter the value");
  scanf("%d",&a[i]);
}
  for(i=0;i<=10;i++)
  {
if(p<a[i])
{
p=a[i];
}
  printf("maximum element is %d",p);
}
}
