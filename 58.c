#include<stdio.h>
int main()
{
int p,q;
printf("enter the numbers:\n");
scanf("%d%d",&p,&q);
p=p^q;
q=p^q;
p=p^q;
printf("swap numbers :%d%d",p,q);
return 0;
}
