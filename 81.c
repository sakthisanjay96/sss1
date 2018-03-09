#include <stdio.h>
int main()
{
int p,q;
printf("enter the number:");
scanf("%d%d",&p,&q);
if(p>q)
{
    printf("%d",p-q);
}
else
{
    printf("%d",q-p);
}
return 0;
}
