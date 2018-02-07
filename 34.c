#include<stdio.h>
void main()
{
char a[100];
int b,count=0;
printf("enter the counting lines:");
scanf("%[^\n]a",a);
for(b=0;a[b]!='\0';b++)
{
  if(a[b]=='.')
  {
  count++;
  }
}
printf("%d",count+1);
}
