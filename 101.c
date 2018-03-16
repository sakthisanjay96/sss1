#include<Stdio.h>
int main()
{
char a[10];
int i,p,n,c=0;
printf("enter string:\n");
scanf("%s",&a);
printf("enter the number:\n");
scanf("%d",&p);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
c++;
if(p==c)
{
    break;
}
}
return 0;
}
