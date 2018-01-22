#include <stdio.h>

int main(void) {
	int i,s,u;
	scanf("%d %d",&s,&u);
	for(i=s+1;i<u;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
	return 0;
}
