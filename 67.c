#include <stdio.h>
int main()
{
int i=1;
int p;
printf("enter the number");
	scanf("%d",&p);
	while(p%10!=0)
	{
		p=p+i;
		
	}
	printf("%d",p);
	return 0;
	
}
