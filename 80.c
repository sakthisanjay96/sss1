#include <stdio.h>
int main()
{
int p,q;
printf("enter the values: \n");
scanf("%d",&p);
while(p!=0)
{
q=p%10;
if(p%2!=0)
{

    printf("%d \n",q);
}
p=p/10;
}
return 0;
}
