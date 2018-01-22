#include <stdio.h>
int main() 
{
    int s,d,count=0;
    printf("enter the no:");
    scanf("%d",&s);
    while(s!=0)
    {
   	count=count+1;	
    s=s/10;
	}
	printf("%d",count);
}
