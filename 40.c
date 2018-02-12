#include <stdio.h>
int main(void)
{
	int p=0,q=1,c,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     if(i<=1)
    c=i;
    else
{
    c=p+q;
    p=q;
    q=c;
}
printf("%d\t",c);
}
	return 0;
}
