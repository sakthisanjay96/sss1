#include<stdio.h>
int main(void)
{
int p=0,q=1,r,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
   r=p+q;
    p=q;
    q=r;
	printf("%d ",p);    
}

	return 0;
}
