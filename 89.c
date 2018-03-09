#include<stdio.h>
int main()
{
char k[10];
int p,q,r,s;
printf("enter string:");
scanf("%s",&k);
s=strlen(k);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(k[i]>k[j])
{
p=k[i];
k[i]=k[j];
k[j]=p;
}}}
printf("%s",k);

return 0;
}
