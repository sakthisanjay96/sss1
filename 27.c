#include <stdio.h>
int main() 
{
	char a;
	printf("Enter the string");
	scanf("%s",&a);
	if(a>=48&&a<=57)
	{
		printf("numeric");
	}
	else
	{
		printf("not numeric");
	}

	return 0;
}
