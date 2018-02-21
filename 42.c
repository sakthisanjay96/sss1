#include<stdio.h>
#include<string.h>
int main()
{
int p,q;
char a[20]="hello",b[30]="world";
p=strlen(a);
q=strlen(b);
if(p>q)
{
printf(" string 1 is greater %s",a);
}
else if(p<q)
{
printf(" string 2 is greater %s",b);

}
else
{
printf(" two string are of same length %s%s",a,b);
}
}
