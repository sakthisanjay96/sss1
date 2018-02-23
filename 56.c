#include<stdio.h>
int main()
{            
            int a,b,temp;
	printf("enter the no:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping:%d %d",b,a);
	return 0;
}
