#include<stdio.h>
int main()
{
	float p,r,s;
	int n;
	printf("enter the principle amount:");
	scanf("%f",&p);
    printf("\nenter the time:");
	scanf("%d",&n);
    printf("\nenter the rate:");
	scanf("%f",&r);
	s=((p*n*r)/100);
	printf("\nfloor value: %f",floor(s));
	return 0;
}
